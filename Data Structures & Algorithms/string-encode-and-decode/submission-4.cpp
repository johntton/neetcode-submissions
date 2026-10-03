class Solution {
public:
    
    string encode(vector<string>& strs) {
        string result = "";

        // add string length and placeholder before each string 
        string length = "";
        for (string str : strs) {
            length = to_string(str.length());
            result += length + "#" + str;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;

        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j += 1;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            decoded_strs.push_back(s.substr(i, length));
            i += length;
        }

        return decoded_strs;
    }
};

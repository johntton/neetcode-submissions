class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;

        // sort string then push string into respective anagram key
        for (auto& str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str); 
        }

        // insert all anagram vectors into final result vector
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};

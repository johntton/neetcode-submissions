class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        // increments count of each unique number
        for (const int& num : nums) {
            count[num]++;
        }

        // pushes each pair into vector and sorts in descending order
        vector<pair<int, int>> arr;
        for (auto& pair : count) {
            arr.push_back({pair.second, pair.first});
        }
        sort(arr.rbegin(), arr.rend());

        // push top k results into result
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};

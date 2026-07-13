class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create empty hashTable
        unordered_map<int, int> hashTable;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if complement is in hashTable
            if (hashTable.count(complement)) {
                // Output
                return{hashTable[complement], i};
            }

            // If it does not exist, insert current element 
            // into hashtable
            hashTable[nums[i]] = i;
        }

        // Edge Case
        return {};
    }
};

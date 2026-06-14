class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> values = {};

        for (int i = 0; i < nums.size(); i++) {
            if (values.contains(nums[i])) {
                return true;
            } else {
                values.insert(nums[i]);
            }
        }
        return false;
    }
};
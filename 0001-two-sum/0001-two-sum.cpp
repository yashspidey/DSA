class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {

            for (auto& it : mp) {
                if (nums[i] + it.first == target and i != it.second) {
                    return {i, it.second};
                }
            }
        }

        return {};
    }
};

class Solution {
public:
    bool find(vector<int>& nums, int n) {

        for (auto i : nums) {
            if (i == n) {
                return true;
            }
        }

        return false;
    }

    vector<int> findMissingElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = nums[0]; i <= nums[n - 1]; i++) {
            if (find(nums,i) == false) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
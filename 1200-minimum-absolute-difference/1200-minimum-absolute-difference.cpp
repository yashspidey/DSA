class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {

        int n = nums.size();
        sort(begin(nums), end(nums));

        int minDiff = INT_MAX;

        for (int i = 1; i < n; i++) {
            minDiff = min(minDiff, nums[i] - nums[i - 1]);
        }

        vector<vector<int>> result;

        for (int i = 1; i < n; i++) {
            int diff = nums[i] - nums[i - 1];

            if (diff == minDiff) {
                result.push_back({nums[i - 1], nums[i]});
            }
        }

        return result;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ansMin = INT_MAX;

        for (int i = 0; i < n; i++) {
            ansMin = min(ansMin, nums[i]);
        }

        return ansMin;
    }
};
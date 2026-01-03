class Solution {
public:
    double max(double a, double b) { return a > b ? a : b; }

    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        double ans = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        ans = (double)sum / k;
        for (int i = 1; i < n - k + 1; i++) {
            sum += nums[i + k - 1];
            sum -= nums[i - 1];
            ans = max(ans, (double)sum / k);
        }
        return ans;
    }
};
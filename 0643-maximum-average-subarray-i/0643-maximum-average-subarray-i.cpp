class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        long double sum = 0;
        long double ans = -1e18;
        int i = 0;

        for (int j = 0; j < n; j++) {

            sum += nums[j];

            if (j - i + 1 < k) {
                continue;
            } else {

                ans = max(ans, (sum / (j - i + 1)));
                sum -= nums[i];
                i++;
            }
        }

        return ans;
    }
};
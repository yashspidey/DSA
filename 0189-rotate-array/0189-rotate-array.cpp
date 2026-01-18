class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;
        if (n == k) {
            return;
        }

        // reverse(nums.begin(), nums.begin() + n); // 0,n
        // reverse(nums.begin(), nums.begin() + k); // 0, k
        // reverse(nums.begin() + k, nums.begin() + n); // k, n
        vector<int> ans(n);

        for (int i = 0; i < k; i++) {
            ans[i] = nums[n - k + i];
        }

        for (int i = k; i < n; i++) {
            ans[i] = nums[i - k];
        }

        nums = ans;
    }
};
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

        int i = 0;
        int j = n - 1;

        while (i <= j) {

            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        i = 0;
        j = k - 1;

        while (i <= j) {

            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        i = k;
        j = n - 1;

        while (i <= j) {

            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};
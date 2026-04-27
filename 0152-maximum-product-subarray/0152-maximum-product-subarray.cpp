class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxProduct = INT_MIN;
        int pref = 1;
        int suff = 1;

        if (n == 1) {
            return nums[0];
        }

        for (int i = 0; i < n; i++) {

            if (pref == 0) {
                pref = 1;
            }

            if (suff == 0) {
                suff = 1;
            }

            pref *= nums[i];
            suff *= nums[n - i - 1];

            maxProduct = max(maxProduct, max(pref, suff));
        }

        return maxProduct;
    }
};
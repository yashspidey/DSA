class Solution {
public // ONE WAY TO DO THIS QUESTION IS USING STL FUNCTION REVERSE

    // THE OTHER WAY TO DO IS MANUALLY WRITING REVERSE FUNCTION, DOES THE SAME
    // WORK AS FIRST METHOD BUT WE JUST WRITE REVERSE FUNCTION MANUALLY.

    // THE WORST WAY TO DO IT IS USING AN EXTRA SPACE.

    : //  unsigened means only positive and signed means positive negative both
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        if (n == k) {
            return;
        }

        k = k % n;

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

        //---------------------------------------------------------------------------

        // int n = nums.size();       // uses extra space so not an optimal
        // approach k = k % n; vector<int> ans(n);

        // for (int i = 0; i < k; i++) {
        //     ans[i] = nums[n - k + i];
        // }

        // for (int i = k; i < n; i++) {
        //     ans[i] = nums[i - k];
        // }

        // nums = ans;

        //---------------------------------------------------------------------------

        // reverse(begin(nums), begin(nums) + n);
        // reverse(begin(nums), begin(nums) + k);
        // reverse(begin(nums) + k, begin(nums) + n);
    }
};
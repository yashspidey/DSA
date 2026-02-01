class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == k) {
            return;
        }

        k = k % n;

        reverse(begin(nums), begin(nums) + n);
        reverse(begin(nums), begin(nums) + k);
        reverse(begin(nums) + k, begin(nums) + n);
    }
};
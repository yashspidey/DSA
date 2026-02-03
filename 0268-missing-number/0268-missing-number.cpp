class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;

        for (int i = 0; i < n; i++) {
            xor1 ^= i;
            xor2 ^= nums[i];
        }

        xor1 ^= n; // most optimal approach

        return xor1 ^ xor2;

        // another optimal approach

        // int n = nums.size();
        // int sum1 = 0;
        // int sum2 = 0;

        // for (int i = 0; i <= n; i++) {
        //     sum1 += i;
        // }

        // for (int i = 0; i < n; i++) {
        //     sum2 += nums[i];
        // }

        // return sum1 - sum2;
    }
};
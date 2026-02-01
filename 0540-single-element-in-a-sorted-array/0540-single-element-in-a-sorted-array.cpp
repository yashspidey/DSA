class Solution {
public: // 0 ^ any element = any element ( always ) & x ^ x = 0
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }

        if (nums[0] != nums[1]) {
            return nums[0];
        }

        if (nums[n - 1] != nums[n - 2]) {
            return nums[n - 1];
        }

        for (int i = 1; i < n - 1; i++) {

            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return -1;
        // [3,7,7,10,10,11,11]
    }
};
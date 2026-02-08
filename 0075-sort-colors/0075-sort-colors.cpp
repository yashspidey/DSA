class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero = 0;
        int one = 0;
        int two = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) {
                zero++;
            } else if (nums[i] == 1) {
                one++;
            } else {
                two++;
            }
        }

        int index = 0;

        while (zero--) {
            nums[index] = 0;
            index++;
        }

        while (one--) {
            nums[index] = 1;
            index++;
        }
        
        while (two--) {
            nums[index] = 2;
            index++;
        }
    }
};
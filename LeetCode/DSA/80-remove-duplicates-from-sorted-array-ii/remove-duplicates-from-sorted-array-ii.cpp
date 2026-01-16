class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int i = 0;
        int j = 0;

        while (j < n) {
            if (i < 2 || nums[i - 2] != nums[j]) {
                nums[i] = nums[j];
                i++;
                j++;
            } else {
                j++;
            }
        }

        return i;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // moores voting algorithm

        int count = 0;
        int maj = NULL;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (maj == nums[i]) {
                count++;
            } else if (count == 0) {
                count++;
                maj = nums[i];
            } else {
                count--;
            }
        }

        return maj;
    }
};
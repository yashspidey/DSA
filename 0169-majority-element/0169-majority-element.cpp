class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // moores voting algorithm

        int count = 0;
        int el = nums[0];
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (count == 0) {
                el = nums[i];
                count++;
            } else if (el != nums[i]) {
                count--;
            } else {
                count++;
            }
        }

        return el;
    }
};
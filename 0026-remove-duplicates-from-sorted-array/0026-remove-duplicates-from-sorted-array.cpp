class Solution {
public: // this question is a good fast and slow pointer question
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int j = 0; // slow pointer
        int i = 0; // fast pointer

        // for loop code version ( in such questions for loop is
        // better, less bug prone, loop bounds are clear in one line
        // )

        for (int i = 0; i < n; i++) {

            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        // while (i < n) { // while loop code version

        //     if (nums[i] == nums[j]) {
        //         i++;
        //     } else {
        //         j++;
        //         nums[j] = nums[i];
        //         i++;
        //     }
        // }

        return j + 1;
    }
};
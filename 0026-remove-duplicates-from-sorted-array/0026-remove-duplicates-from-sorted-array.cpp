class Solution {
public: // this question is a good fast and slow pointer question 
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int j = 0; // slow pointer

        for (int i = 0; i < n; i++) {  // i will be our fast pointer

            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
};
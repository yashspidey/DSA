class Solution {
public:
    bool check(vector<int>& nums) {

             int n = nums.size();
        int a = 0;

        // Find the rotation point
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                a = i + 1;
                break;
            }
        }

        // Rotate the array back to the sorted position
        rotate(nums.begin(), nums.begin() + a, nums.end());

        // Check if the array is sorted
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
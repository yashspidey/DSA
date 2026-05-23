class Solution {
public:
    bool checkIfSorted(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] > nums[i + 1]) {
                break;
            }

            if (i == n - 2 && nums[i] <= nums[i + 1]) {
                return true;
            }
        }

        return false;
    }

    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        reverse(nums.begin(), nums.begin() + (k - 1));
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }

    bool check(vector<int>& nums) {

        int n = nums.size();

        if (n == 1) {
            return true;
        }

        if (checkIfSorted(nums)) {
            return true;
        }

        int count = 1;
        int rotations = 1;

        while (count < n) {

            rotate(nums, rotations);

            bool valid = checkIfSorted(nums);

            if (valid) {
                return true;
            }

            count++;
        }

        return false;
    }
};
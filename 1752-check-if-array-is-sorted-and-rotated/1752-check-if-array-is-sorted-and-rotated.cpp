class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();

        int rotationPoint = -1;
        bool isSorted = true;

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] > nums[i + 1]) {
                rotationPoint = i + 1;
                isSorted = false;
                break;
            }
        }

        if (isSorted) {
            return true;
        }

        rotate(nums.begin(), nums.begin() + rotationPoint, nums.end());

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};
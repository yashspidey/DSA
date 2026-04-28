class Solution {
public:
    int lb(vector<int>& nums, int low, int high, int target) {
        int ans = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }

    int ub(vector<int>& nums, int low, int high, int target) {

        int ans = nums.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans - 1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        int low = 0;
        int high = n - 1;

        int lowb = lb(nums, low, high, target);
        int upb = ub(nums, low, high, target);

        if (lowb == n || nums[lowb] != target) {
            return {-1, -1};
        }

        return {lowb, upb};
    }
};
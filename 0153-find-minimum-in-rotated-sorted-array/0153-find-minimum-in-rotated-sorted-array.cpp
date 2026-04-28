class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ansMin = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[high]) {
                ansMin = min(ansMin, nums[low]);
                break;
            }

            if (nums[low] <= nums[mid]) {
                ansMin = min(ansMin, nums[low]);
                low = mid + 1;
            } else {
                ansMin = min(ansMin, nums[mid]);
                high = mid - 1;
            }
        }

        return ansMin;
    }
};
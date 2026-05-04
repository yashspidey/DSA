class Solution {
public:
    int subarrayCount(vector<int>& nums, int maxSum) {

        long long sum = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (sum + nums[i] <= maxSum) {
                sum += nums[i];
            } else {
                sum = nums[i];
                count++;
            }
        }

        return count;
    }

    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int subCount = subarrayCount(nums, mid);

            if (subCount <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;

        // for (int i = low; i <= high; i++) {

        //     int subCount = subarrayCount(nums, i);

        //     if (subCount <= k) {
        //         return i;
        //     }
        // }

        // return -1;
    }
};
class Solution {
public:
    bool valid(vector<int>& nums, int threshold, int divisor) {

        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {

            sum += ceil((double)nums[i] / (double)divisor);
        }

        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int minDivisor = INT_MAX;

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (valid(nums, threshold, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> prefixMax(n);
        vector<int> sufixMin(n);
        int maxNum = INT_MIN;
        int minNum = INT_MAX;

        // Build prefix max array
        for (int i = 0; i < n; i++) {

            maxNum = max(maxNum, nums[i]);
            prefixMax[i] = maxNum;
        }

        // Build suffix min array
        for (int i = n - 1; i >= 0; i--) {

            minNum = min(minNum, nums[i]);
            sufixMin[i] = minNum;
        }

        // Find first smallest stable index
        for (int i = 0; i < n; i++) {

            if (prefixMax[i] - sufixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};
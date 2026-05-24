class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int peakCount = 0;

        for (int i = 0; i < n; i++) {

            int nextIndex = (i + 1) % n;

            if (nums[i] > nums[nextIndex]) {
                peakCount++;
            }
        }

        return peakCount <= 1;
    }
};
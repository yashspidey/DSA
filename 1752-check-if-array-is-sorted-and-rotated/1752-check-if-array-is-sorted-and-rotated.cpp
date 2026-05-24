class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        vector<int> sorted;
        int totalRotations = 0;
        bool alreadySorted = true;

        sorted = nums;

        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < n - 1; i++) {

            if (nums[i] > nums[i + 1]) {
                alreadySorted = false;
                totalRotations = n - 1 - i;
                break;
            }
        }

        if (alreadySorted) {
            return true;
        }

        for (int i = 0; i < n; i++) {

            if (nums[i] != sorted[(i + totalRotations) % n]) {
                return false;
            }
        }

        return true;
    }
};
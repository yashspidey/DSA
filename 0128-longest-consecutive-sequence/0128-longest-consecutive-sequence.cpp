class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if (n < 2) {
            return n;
        }

        int maxLength = 1;
        int length = 1;

        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {

            if (nums[i] - nums[i - 1] == 1) {
                length++;
            } else if (nums[i] - nums[i - 1] == 0) {
                continue;
            } else {
                length = 1;
            }

            maxLength = max(length, maxLength);
        }
        
        return maxLength;
    }
};
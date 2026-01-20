class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int lastPos = -1;
        int firstPos = INT_MAX;

        for (int i = 0; i < n; i++) {

            if (nums[i] == target) {

                lastPos = max(i, lastPos);
                firstPos = min(i, firstPos);
            }
        }

if(firstPos == INT_MAX){
firstPos = -1;
}

        return {firstPos, lastPos};
    }
};
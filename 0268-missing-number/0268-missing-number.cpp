class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (int i = 0; i <= n; i++) {
            if (!st.count(i)) {
                return i;
            }
        }

        return -1;
    }
};
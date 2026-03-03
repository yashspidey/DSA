class Solution {
public:
    bool ls(vector<int>& nums, int x) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                return true;
            }
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        if (n < 2) {
            return n;
        }

        int longest = 1;
        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto it : st) {

            if (st.find(it - 1) == st.end()) {
                int count = 1;
                int x = it;
                while (st.find(x+1) != st.end()) {
                    x++;
                    count++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
    }
};
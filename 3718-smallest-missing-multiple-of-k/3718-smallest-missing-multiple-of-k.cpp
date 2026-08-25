class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        set<int> st(nums.begin(), nums.end());
        int m = 1;
        while (true) {

            if (!st.count(k * m)) {
                return k * m;
            }

            m++;
        }

        
    }
};
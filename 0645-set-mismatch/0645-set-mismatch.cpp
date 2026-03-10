class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        unordered_set<int> st;
        int array_sum = 0;
        int unique_sum = 0;
        int original_sum = 0;

        for (int i = 0; i < n; i++) {
            array_sum += nums[i];
            st.insert(nums[i]);
        }

        for (int i = 1; i <= n; i++) {
            original_sum += i;
        }

        for (auto it : st) {
            unique_sum += it;
        }

        int duplicate = array_sum - unique_sum;
        int missing = original_sum - unique_sum;

        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};
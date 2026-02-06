class Solution {
public: // this problem has 3 approaches
        // brute - O(n^2) & SC - O(1)
        // better - O(n*logn) & SC - O(n)
        // optimal - O(n) & SC - O(n)
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {

            int rem = target - nums[i];
            if (mp.find(rem) != mp.end()) {
                return {i, mp[rem]};
            }
            mp[nums[i]] = i;
        }

        return {};

        // --------------------------------------------------------------------------

        // better approach O(n*logn)

        //  vector<pair<int, int>> ans;

        //         for (int i = 0; i < nums.size(); i++) {
        //             ans.push_back({nums[i], i});
        //         }

        //         sort(begin(ans), end(ans));

        //         int left = 0;
        //         int rght = nums.size() - 1;

        //         while (left < rght) {

        //             int sum = ans[left].first + ans[rght].first;

        //             if (sum == target) {
        //                 return {ans[left].second, ans[rght].second};
        //             } else if (sum > target) {
        //                 rght--;
        //             } else {
        //                 left++;
        //             }
        //         }

        //         return {};
    }
};
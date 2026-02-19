class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            ans.push_back({nums[i], i});
        }

        sort(begin(ans), end(ans));

        int i = 0;
        int j = n - 1;

        while (i < j) {

            int first = ans[i].first;
            int last = ans[j].first;

            if (first + last == target) {
                return {ans[i].second, ans[j].second};
            } else if (first + last < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};
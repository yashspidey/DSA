class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        map<int, int> mp;
        int n = nums.size();
        int i = 0;
        vector<int> ans;
        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;

            if (j - i + 1 < k) {
                continue;
            } else {
                ans.push_back(mp.rbegin()->first);
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
        }

        return ans;
    }
};
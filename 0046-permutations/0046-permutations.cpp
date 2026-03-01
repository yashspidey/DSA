class Solution {

private:
    void recurPermute(vector<vector<int>>& ans, vector<int>& ds,
                      vector<int>& freq, vector<int>& nums) {

        if (ds.size() == nums.size()) {

            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (!freq[i]) {

                freq[i] = 1;
                ds.push_back(nums[i]);
                recurPermute(ans, ds, freq, nums);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(n, 0);
        recurPermute(ans, ds, freq, nums);
        return ans;
    }
};
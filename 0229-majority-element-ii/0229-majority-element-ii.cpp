class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int maj1 = NULL;
        int maj2 = NULL;
        int count1 = 0;
        int count2 = 0;
        vector<int> ans;

        for (int i = 0; i < n; i++) {

            if (maj1 == nums[i]) {
                count1++;
            } else if (maj2 == nums[i]) {
                count2++;
            } else if (count1 == 0) {
                count1 = 1;
                maj1 = nums[i];
            } else if (count2 == 0) {
                count2 = 1;
                maj2 = nums[i];
            } else {
                count1--;
                count2--;
            }
        }

        int freq1 = 0;
        int freq2 = 0;

        for (int i = 0; i < n; i++) {

            if (maj1 == nums[i]) {
                freq1++;
            } else if (maj2 == nums[i]) {
                freq2++;
            }
        }

        if (freq1 > floor(n / 3)) {
            ans.push_back(maj1);
        }

        if (freq2 > floor(n / 3)) {
            ans.push_back(maj2);
        }

        return ans;
    }
};
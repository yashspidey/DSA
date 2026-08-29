class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        vector<int> idx;
        // find the equal index
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    idx.push_back(j);
                }
            }
        }
        vector<int> ans;
        // find the answer

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = idx[i] + 1; j < nums2.size(); j++) {
                if (nums1[i] < nums2[j]) {
                    ans.push_back(nums2[j]);
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};
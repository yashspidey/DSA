class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();



        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        int len = ans.size();
        double median = 0;

        if (len % 2 != 0) {
            median = ans[len / 2];
        } else {
            median = (ans[len / 2] + ans[(len / 2) - 1]) / 2.0;
        }

        return median;
    }
};
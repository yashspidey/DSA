class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        int i = 0;
        int j = 0;
        int count = 0;
        int idx1 = (m + n) / 2;
        int idx2 = idx1 - 1;
        int el1 = -1;
        int el2 = -1;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                if (count == idx1) {
                    el1 = nums1[i];
                }

                if (count == idx2) {
                    el2 = nums1[i];
                }

                count++;
                i++;

            } else {
                if (count == idx1) {
                    el1 = nums2[j];
                }

                if (count == idx2) {
                    el2 = nums2[j];
                }

                count++;
                j++;
            }
        }

        while (i < m) {
            if (count == idx1) {
                el1 = nums1[i];
            }

            if (count == idx2) {
                el2 = nums1[i];
            }

            count++;
            i++;
        }

        while (j < n) {
            if (count == idx1) {
                el1 = nums2[j];
            }

            if (count == idx2) {
                el2 = nums2[j];
            }

            count++;
            j++;
        }

        int len = (m + n);
        double median = 0;

        if (len % 2 != 0) {
            return median = el1;
        }

        median = (double)(el1 + el2) / 2.0;

        return median;
    }
};
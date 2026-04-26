class Solution {
public:
    int merge(vector<int>& nums, int st, int mid, int end) {

        vector<int> temp;
        int i = st;
        int j = mid + 1;
        int count = 0;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {

                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {

            temp.push_back(nums[i]);
            i++;
        }

        while (j <= end) {

            temp.push_back(nums[j]);
            j++;
        }

        for (int i = 0; i < temp.size(); i++) {

            nums[i + st] = temp[i];
        }

        return count;
    }

    int countPairs(vector<int>& nums, int st, int mid, int end) {

        int j = mid + 1;
        int count = 0;

        for (int i = st; i <= mid; i++) {
            while (j <= end && (long long)nums[i] > 2 * (long long)nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        return count;
    }

    int mergeSort(vector<int>& nums, int st, int end) {

        int mid = st + (end - st) / 2;
        int count = 0;

        if (st < end) {
            count += mergeSort(nums, st, mid);
            count += mergeSort(nums, mid + 1, end);
            count += countPairs(nums, st, mid, end);
            merge(nums, st, mid, end);
        }

        return count;
    }

    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        return mergeSort(nums, 0, n - 1);
    }
};

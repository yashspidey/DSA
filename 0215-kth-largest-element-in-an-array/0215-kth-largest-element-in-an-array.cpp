class Solution {
public:
    int partition(vector<int>& nums, int s, int e) {

        int P = nums[s];
        int i = s + 1;
        int j = e;

        while (i <= j) {

            if (nums[i] < P && nums[j] > P) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }

            if (nums[i] >= P) {
                i++;
            }

            if (nums[j] <= P) {
                j--;
            }
        }

        swap(nums[s], nums[j]);
        return j;

        // int idx = s - 1;
        // int pivot = nums[e];

        // for (int j = s; j < e; j++) {

        //     if (nums[j] <= pivot) {
        //         idx++;
        //         swap(nums[j], nums[idx]);
        //     }
        // }

        // idx++;
        // swap(nums[e], nums[idx]);
        // return idx;
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int pivot_idx = 0;

        // kth largest pivot element - nums[k - 1]  (descending order me
        // partition krenge)

        while (true) {

            pivot_idx = partition(nums, s, e);

            if (pivot_idx == k - 1) {
                break;
            } else if (pivot_idx > k - 1) {
                e = pivot_idx - 1;
            } else {
                s = pivot_idx + 1;
            }
        }
        return nums[pivot_idx];
    }
};
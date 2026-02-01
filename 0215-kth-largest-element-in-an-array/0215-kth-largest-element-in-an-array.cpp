class Solution { // QUICK SELECT ( HOARE'S PARTITION ALGORITHM )
public:
    // assume pivot as 1st element and i as s + 1 and j as last element, we want
    // all greater elements than pivot on the left of pivot and smaller elements
    // than pivot on the right of pivot, partition is done, from the partition
    // we can say that our pivot is the ( index of pivot + 1)th largest element.
    // then just compare this index with given k, if its equal return, if its
    // greater or smaller, adjust the s or e pointer according to the condition.

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
                return nums[pivot_idx];
            } else if (pivot_idx > k - 1) {
                e = pivot_idx - 1;
            } else {
                s = pivot_idx + 1;
            }
        }
        return -1;
    }
};
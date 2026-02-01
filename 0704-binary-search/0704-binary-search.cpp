class Solution {
public:
    // int binarySearch(vector<int>& nums, int s, int e, int target) {
    //     if (s > e) {
    //         return -1;
    //     }
    //     int mid = s + (e - s) / 2;

    //     if (nums[mid] > target) {
    //         return binarySearch(nums, s, mid - 1, target);
    //     } else if (nums[mid] < target) {
    //         return binarySearch(nums, mid + 1, e, target);
    //     } else {
    //         return mid;
    //     }
    // }

    int search(vector<int>& nums, int target) {

        // iterative approach

        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s <= e) {

            if (nums[mid] > target) {
                e = mid - 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                return mid;
            }
            mid = s + (e - s) / 2;
        }
        return -1;

        // recursive approach

        // int n = nums.size();
        // int s = 0;
        // int e = n - 1;
        // int mid = s + (e - s) / 2;

        // return binarySearch(nums, s, e, target);
    }
};
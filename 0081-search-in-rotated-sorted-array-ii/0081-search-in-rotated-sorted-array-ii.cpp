

class Solution {
public:
    int findPivot(vector<int>& nums, int n, int s, int e) {

        while (s < e) {

            // calculate mid after skipping duplicates !!

            while (s < e && nums[s] == nums[s + 1]) {
                s++;
            }

            while (s < e && nums[e] == nums[e - 1]) {
                e--;
            }
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    bool binarySearch(vector<int>& nums, int n, int s, int e, int target) {

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > target) {
                e = mid - 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        int pivot_index = findPivot(nums, n, s, e);

        bool search = binarySearch(nums, n, s, pivot_index - 1, target);

        if (search) {
            return search;
        }

        return binarySearch(nums, n, pivot_index, n - 1, target);
    }
};
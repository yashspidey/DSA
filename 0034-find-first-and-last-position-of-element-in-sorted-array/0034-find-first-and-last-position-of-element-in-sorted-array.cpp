class Solution {
public:
    int rightMostPos(int s, int e, vector<int>& nums, int target) {

        int mid = s + (e - s) / 2;
        int rightMost = -1;

        while (s <= e) {

            if (nums[mid] == target) { // 5,7,7,8,8,10
                rightMost = mid;
                s = mid + 1;

            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return rightMost;
    }
    int leftMostPos(int s, int e, vector<int>& nums, int target) {

        int mid = s + (e - s) / 2;
        int leftMost = -1;

        while (s <= e) {

            if (nums[mid] == target) { // 5,7,7,8,8,8
                leftMost = mid;

                e = mid - 1;

            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return leftMost;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int ending = rightMostPos(s, e, nums, target);
        int starting = leftMostPos(s, e, nums, target);

        return {starting, ending};
    }
};
class Solution {
public:
    // use the 3 rules , 3 conditions and the diagram for visualization
    // [0....low-1] = 0
    // [low....mid-1] = 1
    // [high+1....n-1] = 2

    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
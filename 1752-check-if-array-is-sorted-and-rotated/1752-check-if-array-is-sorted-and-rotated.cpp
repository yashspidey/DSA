class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        vector<int> sorted(n);

        for (int i = 0; i < n; i++) {

            int x = i;

            for (int j = 0; j < n; j++) {

                sorted[(n - x + j) % n] = nums[j];
            }

            bool valid = true;

            for (int k = 0; k < sorted.size() - 1; k++) {

                if (sorted[k] > sorted[k + 1]) {
                    valid = false;
                    break;
                }
            }

            if (valid == true) {
                return true;
            }
        }

        return false;
    }
};
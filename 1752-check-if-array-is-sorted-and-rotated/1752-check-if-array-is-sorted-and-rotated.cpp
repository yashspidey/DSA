class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        vector<int> sorted(n);

        if(n == 1){
            return true;
        }

        for (int i = 0; i < n; i++) {

            int x = i;

            for (int i = 0; i < n; i++) {

                sorted[(n - x + i) % n] = nums[i];
            }

            bool valid = true;

            for (int i = 0; i < sorted.size() - 1; i++) {

                if (sorted[i] > sorted[i + 1]) {
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
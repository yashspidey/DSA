class Solution {
public:
    int sum(int n) {

        int sum = 0;

        while (n) {
            int ld = n % 10;
            n = n / 10;
            sum += ld;
        }

        return sum;
    }

    int minElement(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int sumOfEl = sum(nums[i]);

            nums[i] = sumOfEl;
        }

        int minEl = *min_element(nums.begin(), nums.end());

        return minEl;
    }
};
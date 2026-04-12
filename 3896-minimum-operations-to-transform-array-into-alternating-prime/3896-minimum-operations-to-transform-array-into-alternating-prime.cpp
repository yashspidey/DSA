class Solution {
public:
    bool isPrime(int x) {

        int count = 0;

        if (x == 1) {
            return false;
        }

        for (int i = 2; i * i <= x; i++) {

            if (x % i == 0) {
                return false;
            }
        }

        return true;
    }

    int minOperations(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {

            if (i % 2 == 0) {

                while (!isPrime(nums[i])) {
                    nums[i]++;
                    count++;
                }

            } else {

                while (isPrime(nums[i])) {
                    nums[i]++;
                    count++;
                }
            }
        }

        return count;
    }
};
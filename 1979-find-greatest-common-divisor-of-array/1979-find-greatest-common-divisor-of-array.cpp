class Solution {
public:
    int gcd(int a, int b) {
        if (a == b) {
            return a;
        } else if (a == 0) {
            return b;
        } else if (b == 0) {
            return a;
        }

        int maxnum = INT_MIN;

        for (int i = 1; i <= min(a, b); i++) {
            if (a % i == 0 and b % i == 0) {
                maxnum = max(maxnum, i);
            }
        }

        return maxnum;
    }

    int findGCD(vector<int>& nums) {

        return gcd(*max_element(nums.begin(), nums.end()),
                   *min_element(nums.begin(), nums.end()));
    }
};
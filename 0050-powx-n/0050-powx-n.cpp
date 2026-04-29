class Solution {
public:
    double myPow(double x, int n) {

        double ans = 1;
        long long m = n;

        if (m < 0) {
            m = -m;
        }

        while (m > 0) {
            if (m % 2 == 1) {
                m--;
                ans *= x;
            } else {
                m /= 2;
                x *= x;
            }
        }

        if (n < 0) {
            return 1.0 / ans;
        }
        return ans;
    }
};
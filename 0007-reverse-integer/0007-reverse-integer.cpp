class Solution {
public:
    int reverse(int x) {

        int n = x;
        long revNum = 0;

        while (n != 0) {

            int lastDigit = n % 10;
            n = n / 10;
            revNum = revNum * 10 + lastDigit;
        }

        if (revNum > INT_MAX || revNum < INT_MIN) {
            return 0;
        }

        return (int)revNum;
    }
};
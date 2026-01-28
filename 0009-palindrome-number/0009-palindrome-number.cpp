class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int n = x;
        long revNum = 0;

        while (n != 0) {

            int lastDigit = n % 10;
            n = n / 10;
            revNum = revNum * 10 + lastDigit;
        }

        return revNum == x;
    }
};
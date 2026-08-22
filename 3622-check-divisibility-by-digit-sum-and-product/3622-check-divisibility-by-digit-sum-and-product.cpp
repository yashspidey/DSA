class Solution {
public:
    // a function which return sum of sum of its digits and product of its
    // digits.
    int sum(int n) {

        int ssum = 0, prod = 1;

        while (n) {

            int ld = n % 10;
            n /= 10;

            ssum += ld;
            prod *= ld;
        }

        return ssum + prod;
    }

    bool checkDivisibility(int n) {

        int val = sum(n);

        // return true if divisible and false if not divisible
        return !(n % val);
    }
};
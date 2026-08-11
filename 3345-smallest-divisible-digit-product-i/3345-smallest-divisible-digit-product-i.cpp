class Solution {
public:
    int sum(int n) {
        int sum = 1;

        while (n) {
            int ld = n % 10;
            n /= 10;
            sum *= ld;
        }
        return sum;
    }

    int smallestNumber(int n, int t) {

        if(n <= t){
            return t;
        }

        while (true) {

            if (sum(n) % t == 0) {
                break;
            } else {
                n++;
            }
        }

        return n;
    }
};
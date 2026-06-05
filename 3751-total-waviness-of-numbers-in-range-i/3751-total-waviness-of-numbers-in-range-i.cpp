class Solution {
public:
    int waviness(int n) {

        int count = 0;

        vector<int> digitsOfNumber;

        while (n) {

            int ld = n % 10;
            n = n / 10;
            digitsOfNumber.push_back(ld);
        }

        for (int i = 1; i < digitsOfNumber.size() - 1; i++) {

            int digit = digitsOfNumber[i];

            if ((digit > digitsOfNumber[i - 1] &&
                 digit > digitsOfNumber[i + 1]) ||
                (digit < digitsOfNumber[i - 1] &&
                 digit < digitsOfNumber[i + 1])) {

                count++;
            }
        }

        return count;
    }

    int totalWaviness(int num1, int num2) {

        int sum = 0;

        for (int i = num1; i <= num2; i++) {

            sum += waviness(i);
        }

        return sum;
    }
};
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int n = bills.size();

        if (bills[0] == 10 || bills[0] == 20) {
            return false;
        }

        int five = 0, ten = 0, twenty = 0;
        for (int i = 0; i < n; i++) {

            if (bills[i] == 10) {
                if (five < 1)
                    return false;
            } else if (bills[i] == 20) {
                if (five < 3 && (five < 1 || ten < 1))
                    return false;
            }

            if (bills[i] == 5) {
                five++;
            } else if (bills[i] == 10) {
                ten++;
                five--;
            } else {
                twenty++;

                if (ten != 0) {
                    ten--;
                    five--;
                } else {
                    five -= 3;
                }
            }



            cout << five << " " << ten << endl;
        }
        return true;
    }
};
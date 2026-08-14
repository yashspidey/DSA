class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int us = 0;
        int m = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {

            if (grumpy[j] == 1) {
                us += customers[j];
            }

            if (j - i + 1 < minutes) {
                continue;
            } else {
                m = max(m, us);
                if (grumpy[i] == 1) {
                    us -= customers[i];
                }

                i++;
            }
        }

        for (int i = 0; i < grumpy.size(); i++) {
            if (grumpy[i] == 0) {
                m += customers[i];
            }
        }

        return m;
    }
};
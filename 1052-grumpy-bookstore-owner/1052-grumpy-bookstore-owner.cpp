class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int us = 0;
        int m = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {

            us += customers[j] * grumpy[j];

            if (j - i + 1 < minutes) {
                continue;
            } else {
                m = max(m, us);
                us -= customers[i] * grumpy[i];
                i++;
            }
        }

        for (int i = 0; i < grumpy.size(); i++) {
            m += customers[i] * (1 - grumpy[i]);
        }

        return m;
    }
};
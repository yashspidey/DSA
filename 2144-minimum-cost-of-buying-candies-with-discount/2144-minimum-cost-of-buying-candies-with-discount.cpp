class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int n = cost.size();
        int counter = 1;
        int minCost = 0;

        sort(cost.begin(), cost.end());

        for (int i = n - 1; i >= 0; i--) {

            if (counter == 3) {
                counter = 1;
                continue;
            }

            minCost += cost[i];
            counter++;
        }

        return minCost;
    }
};
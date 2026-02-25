class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int maxProfit = 0;
        int minimalBuy = prices[0];

        for (int i = 1; i < n; i++) {

            int profit = prices[i] - minimalBuy;
            maxProfit = max(maxProfit, profit);
            minimalBuy = min(minimalBuy, prices[i]);
        }

        return maxProfit;
    }
};
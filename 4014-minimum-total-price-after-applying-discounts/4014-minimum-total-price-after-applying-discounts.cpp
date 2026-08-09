class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        double ans = 0;

        for (int i = 0; i < prices.size(); i++) {
            ans += prices[i];

            if (i < discounts.size()) {
                ans -= (double)prices[i] * discounts[i] / 100.0;
            }
        }

        return ans;
    }
};
class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int m = units.size();
        int n = units[0].size();

        if (n == 1) {
            int ans = 0;
            for (int i = 0; i < m; i++) {
                ans += units[i][0];
            }

            return ans;
        }

        long long sum_min2 = 0;
        long long minelem = INT_MAX;
        long long min2elem = INT_MAX;

        for (int i = 0; i < m; i++) {
            long long min1 = INT_MAX;
            long long min2 = INT_MAX;
            for (int j = 0; j < n; j++) {
                if (units[i][j] < min1) {
                    min2 = min1;
                    min1 = units[i][j];
                } else if (units[i][j] < min2) {
                    min2 = units[i][j];
                }
            }

            sum_min2 += (long long)min2;
            minelem = min(minelem, min1);
            min2elem = min(min2elem, min2);
        }

        return sum_min2 - min2elem + minelem;
    }
};
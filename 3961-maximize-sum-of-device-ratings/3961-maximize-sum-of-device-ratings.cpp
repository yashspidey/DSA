class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int min_elem = INT_MAX;
        int min_sec = INT_MAX;

        long long sum_second_min = 0;

        int n = units.size();
        int m = units[0].size();

        if (m == 1) {
            long long ans = 0;
            for (auto &row : units) {
                ans += (long long)row[0];
            }
            return ans;
        }

        for (int i = 0; i < n; i++) {
            int min1 = INT_MAX;   // smallest element of that device
            int min2 = INT_MAX;   // second smallest element of that device

            for (int j = 0; j < m; j++) {
                int x = units[i][j];

                if (x < min1) {
                    min2 = min1;
                    min1 = x;
                }
                else if (x < min2) {
                    min2 = x;
                }
            }

            sum_second_min += min2;
            min_elem = min(min_elem, min1);   // minimum element of all the elements
            min_sec = min(min_sec, min2);     // second minimum element of the devices
        }

        return sum_second_min + min_elem - min_sec;
    }
};
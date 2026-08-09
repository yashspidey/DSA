class Solution {
public:
    int maxArea(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        // 2D prefix sum
        vector<vector<int>> pref(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                pref[i + 1][j + 1] =
                    mat[i][j]
                    + pref[i][j + 1]
                    + pref[i + 1][j]
                    - pref[i][j];
            }
        }

        // Check if square [r, r+k) x [c, c+k) contains only 1s
        auto valid = [&](int r, int c, int k) {
            int sum = pref[r + k][c + k]
                    - pref[r][c + k]
                    - pref[r + k][c]
                    + pref[r][c];

            return sum == k * k;
        };

        auto can = [&](int k) {
            if (k == 0) return true;

            // row[r] = whether there is a valid k-square
            // whose top-left corner is in row r.
            vector<int> row(m, 0);

            // col[c] = whether there is a valid k-square
            // whose top-left corner is in column c.
            vector<int> col(n, 0);

            for (int r = 0; r + k <= m; r++) {
                for (int c = 0; c + k <= n; c++) {
                    if (valid(r, c, k)) {
                        row[r] = 1;
                        col[c] = 1;
                    }
                }
            }

            // Prefix sums over rows and columns
            vector<int> rowPref(m + 1, 0);
            vector<int> colPref(n + 1, 0);

            for (int i = 0; i < m; i++)
                rowPref[i + 1] = rowPref[i] + row[i];

            for (int j = 0; j < n; j++)
                colPref[j + 1] = colPref[j] + col[j];

            for (int r = 0; r + k <= m; r++) {
                for (int c = 0; c + k <= n; c++) {

                    if (!valid(r, c, k))
                        continue;

                    // Is there a valid square completely above us?
                    bool above = false;

                    if (r - k >= 0) {
                        above = rowPref[r - k + 1] > 0;
                    }

                    // Is there a valid square completely to our left?
                    bool left = false;

                    if (c - k >= 0) {
                        left = colPref[c - k + 1] > 0;
                    }

                    if (above || left)
                        return true;
                }
            }

            return false;
        };

        // Binary search maximum k
        int lo = 1;
        int hi = min(m, n);
        int ans = 0;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (can(mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return ans * ans;
    }
};
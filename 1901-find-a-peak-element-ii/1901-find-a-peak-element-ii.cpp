class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if ((i == 0 || mat[i][j] > mat[i - 1][j]) &&
                    (i == m - 1 || mat[i][j] > mat[i + 1][j]) &&
                    (j == 0 || mat[i][j] > mat[i][j - 1]) &&
                    (j == n - 1 || mat[i][j] > mat[i][j + 1])) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
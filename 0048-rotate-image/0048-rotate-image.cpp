class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // transpose - 1st row -> 1st col, 2nd row -> 2nd col, 3rd row -> 3rd col

        for (int i = 0; i <= n - 2; i++) {
            for (int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse the columns 

        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
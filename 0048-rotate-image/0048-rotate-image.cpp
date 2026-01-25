class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ans(rows, vector<int>(cols));

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {

                ans[col][rows - 1 - row] = matrix[row][col];
            }
        }
        matrix = ans;
    }
};
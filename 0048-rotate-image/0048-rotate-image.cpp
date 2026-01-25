class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // transpose

        for (int row = 0; row < rows; row++) {
            for (int col = row; col < cols; col++) {

                swap(matrix[row][col], matrix[col][row]);
            }
        }

        // reverse matrix

        for (int row = 0; row < rows; row++) {

            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};
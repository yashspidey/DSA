class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();
        int rows = 0;
        int cols = n - 1;

        while (cols >= 0 && rows < m) {

            if (matrix[rows][cols] == target) {
                return true;
            } else if (target < matrix[rows][cols]) {
                cols--;
            } else {
                rows++;
            }
        }

        return false;
    }
};
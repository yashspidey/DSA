class Solution {
public:
    bool colBinarySearch(vector<vector<int>>& matrix, int rowIdx, int target) {

        int n = matrix[rowIdx].size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (target == matrix[rowIdx][mid]) {
                return true;
            } else if (target < matrix[rowIdx][mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (target < matrix[mid][0]) {
                high = mid - 1;
            } else if (target > matrix[mid][n - 1]) {
                low = mid + 1;
            } else {

                return colBinarySearch(matrix, mid, target);
            }
        }

        return false;
    }
};
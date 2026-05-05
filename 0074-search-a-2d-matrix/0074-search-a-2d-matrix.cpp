class Solution {
public:
    bool BinarySearch(vector<int> matrix, int target) {

        int n = matrix.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (target == matrix[mid]) {
                return true;
            } else if (target < matrix[mid]) {
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

                return BinarySearch(matrix[mid], target);
            }
        }

        // for (int i = 0; i < m; i++) {

        //     if (matrix[i][0] <= target && target <= matrix[i][n - 1]) {
        //         return BinarySearch(matrix[i], target);
        //     }
        // }

        return false;
    }
};
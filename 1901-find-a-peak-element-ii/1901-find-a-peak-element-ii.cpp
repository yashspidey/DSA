class Solution {
public:
    int findMaxRowElement(vector<vector<int>>& mat, int m, int n, int col) {

        int maxValue = -1;
        int index = -1;

        for (int i = 0; i < m; i++) {

            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();
        int s = 0;
        int e = n - 1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            int maxRowElement = findMaxRowElement(mat, m, n, mid);
            int left = mid - 1 >= 0 ? mat[maxRowElement][mid - 1] : -1;
            int right = mid + 1 < n ? mat[maxRowElement][mid + 1] : -1;

            if (mat[maxRowElement][mid] > left &&
                mat[maxRowElement][mid] > right) {
                return {maxRowElement, mid};
            } else if (mat[maxRowElement][mid] < left) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return {};
    }
};
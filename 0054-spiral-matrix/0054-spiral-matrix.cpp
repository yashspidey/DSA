class Solution {
public: // tough question try again
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();    // rows
        int n = matrix[0].size(); // cols
        int dir = 0;

        //  dir 0 : left to right
        //  dir 1 : top to bottom
        //  dir 2 : right to left
        //  dir 3 : bottom to top

        int top = 0;
        int right = n - 1;
        int left = 0;
        int bottom = m - 1;

        vector<int> ans;

        while (top <= bottom && left <= right) {
                if (dir == 0) {
                    // left to right
                    // constant : row

                    for (int i = left; i <= right; i++) {
                        ans.push_back(matrix[top][i]);
                    }
                    top++;
                }
                if (dir == 1) {
                    // top to bottom
                    // constant : col

                    for (int i = top; i <= bottom; i++) {
                        ans.push_back(matrix[i][right]);
                    }
                    right--;
                }
                if (dir == 2) {
                    // right to left
                    // constant : row (bottom)

                    for (int i = right; i >= left; i--) {
                        ans.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                }
                if (dir == 3) {
                    // bottom to top
                    // constant : col (left)

                    for (int i = bottom; i >= top; i--) {
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
                dir = (dir + 1) % 4;
            }
        return ans;
    }
};
class Solution {
public: // good question, will try again in future.
    bool isValidGrid(vector<vector<char>>& board, int sr, int er, int sc,
                     int ec) {

        unordered_set<int> st;

        for (int row = sr; row <= er; row++) {
            for (int col = sc; col <= ec; col++) {

                if (board[row][col] == '.') {
                    continue;
                }

                if (st.count(board[row][col])) {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        int rows = board.size();
        int cols = board[0].size();

        // validate rows

        for (int row = 0; row < rows; row++) {
            unordered_set<int> st;
            for (int col = 0; col < cols; col++) {

                if (board[row][col] == '.') {
                    continue;
                }

                if (st.count(board[row][col])) {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }

        // validate columns

        for (int col = 0; col < cols; col++) {
            unordered_set<int> st;
            for (int row = 0; row < rows; row++) {

                if (board[row][col] == '.') {
                    continue;
                }

                if (st.count(board[row][col])) {
                    return false;
                }
                st.insert(board[row][col]);
            }
        }

        // validate 3x3 grid

        for (int sr = 0; sr < 9; sr += 3) {

            int er = sr + 2;

            for (int sc = 0; sc < 9; sc += 3) {

                int ec = sc + 2;

                bool valid = isValidGrid(board, sr, er, sc, ec);

                if (!valid) {
                    return valid;
                }
            }
        }

        return true;
    }
};
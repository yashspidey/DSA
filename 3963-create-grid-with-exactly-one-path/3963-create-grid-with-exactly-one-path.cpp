class Solution {
public:
    vector<string> createGrid(int m, int n) {

        string s = "";

        for (int i = 0; i < n; i++) {
            s += '#';
        }

        vector<string> v(m, s);

        for (int i = 0; i < n; i++) {
            v[0][i] = '.';
        }

        for (int i = 0; i < m; i++) {
            v[i][n - 1] = '.';
        }

        return v;
    }
};
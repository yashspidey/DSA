class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars,
                               vector<int>& vBars) {

// sort the inputs

        sort(begin(hBars), end(hBars));
        sort(begin(vBars), end(vBars));

// initialize variables

        int maxConsecutiveHbars = 1;
        int maxConsecutiveVbars = 1;
        int consecutiveHbars = 1;
        int consecutiveVbars = 1;
        int h = hBars.size();
        int v = vBars.size();

// find maxconsecutive hbars

        for (int i = 1; i < h; i++) {
            if (hBars[i] - hBars[i - 1] == 1) {
                consecutiveHbars++;
            } else {
                consecutiveHbars = 1;
            }
            maxConsecutiveHbars = max(maxConsecutiveHbars, consecutiveHbars);
        }

// find maxconsecutivevbars

        for (int i = 1; i < v; i++) {
            if (vBars[i] - vBars[i - 1] == 1) {
                consecutiveVbars++;
            } else {
                consecutiveVbars = 1;
            }
            maxConsecutiveVbars = max(maxConsecutiveVbars, consecutiveVbars);
        }
// find side

        int side = min(maxConsecutiveHbars + 1, maxConsecutiveVbars + 1);

// find and return area

        return side * side;
    }
};
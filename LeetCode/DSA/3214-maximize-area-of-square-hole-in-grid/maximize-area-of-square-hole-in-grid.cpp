class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars,
                               vector<int>& vBars) {

        sort(begin(hBars), end(hBars));
        sort(begin(vBars), end(vBars));

        int maxConsecutiveHbars = 1;
        int maxConsecutiveVbars = 1;
        int consecutiveHbars = 1;
        int consecutiveVbars = 1;
        int h = hBars.size();
        int v = vBars.size();

        for (int i = 1; i < h; i++) {
            if (hBars[i] - hBars[i - 1] == 1) {
                consecutiveHbars++;
            } else {
                consecutiveHbars = 1;
            }
            maxConsecutiveHbars = max(maxConsecutiveHbars, consecutiveHbars);
        }

        for (int i = 1; i < v; i++) {
            if (vBars[i] - vBars[i - 1] == 1) {
                consecutiveVbars++;
            } else {
                consecutiveVbars = 1;
            }
            maxConsecutiveVbars = max(maxConsecutiveVbars, consecutiveVbars);
        }

        int side = min(maxConsecutiveHbars + 1, maxConsecutiveVbars + 1);

        return side * side;
    }
};
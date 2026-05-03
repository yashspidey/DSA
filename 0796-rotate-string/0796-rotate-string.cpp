class Solution {
public:
    bool rotateString(string s, string goal) {

        int n = s.size();

        if (s.size() != goal.size()) {
            return false;
        }

        int count = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] != goal[i]) {
                break;
            }

            if (i == n - 1 && s[i] == goal[i]) {
                return true;
            }
        }

        while (count < n) {

            rotate(s.begin(), s.begin() + 1, s.end());

            count++;

            if (s == goal) {
                return true;
            }
        }

        return false;
    }
};
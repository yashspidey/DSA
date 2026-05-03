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

            reverse(s.begin() + 1, s.end());
            reverse(s.begin(), s.end());
            count++;

            for (int i = 0; i < n; i++) {

                if (s[i] != goal[i]) {
                    break;
                }

                if (i == n - 1 && s[i] == goal[i]) {
                    return true;
                }
            }
        }

        return false;
    }
};
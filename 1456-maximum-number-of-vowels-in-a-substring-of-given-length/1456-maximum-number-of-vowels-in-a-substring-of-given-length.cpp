class Solution {
public:
    int maxVowels(string s, int k) {

        int n = s.size();
        int i = 0;
        int v = 0;
        int mv = 0;

        for (int j = 0; j < n; j++) {

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                v++;
            }

            if (j - i + 1 < k) {
                continue;
            } else {

                mv = max(mv, v);
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u') {
                    v--;
                }
                i++;
            }
        }

        return mv;
    }
};
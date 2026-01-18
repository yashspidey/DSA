class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        int n = s.size();
        int i = 0;
        int left = 0;
        int right = 0;

        while (i < n) {

            while (i < n && s[i] != ' ') {
                s[right] = s[i];
                i++;
                right++;
            }
            if (left < right) {
                reverse(s.begin() + left, s.begin() + right);
                s[right] = ' ';
                right++;
                left = right;
            }
            i++;
        }
        return s.substr(0, right - 1);
    }
};
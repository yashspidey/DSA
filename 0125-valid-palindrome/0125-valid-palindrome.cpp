class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {

            char first = s[i];
            char last = s[j];

            if (!isalnum(first)) {
                i++;
                continue;
            }
            if (!isalnum(last)) {
                j--;
                continue;
            }

            if (tolower(first) != tolower(last)) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
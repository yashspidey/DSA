class Solution {
public:
    bool isPalindrome(int x) {

        string s = to_string(x);

        int n = s.size();
        auto i = 0;
        auto j = n - 1;

        while (i < j) { // i < j

            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
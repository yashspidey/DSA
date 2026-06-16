

class Solution {
public:
    string processStr(string s) {

        string result;
        bool valid = false;

        for (char ch : s) {

            int ascival = ch - 'a';

            if (97 <= ch && ch <= 122) {
                valid = true;
                break;
            }
        }

        if (!valid) {
            return "";
        }

        // a # b % *

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            if (ch == '#') {
                result += result;
            } else if (ch == '*') {
                if (result.size() > 0) {
                    result.pop_back();
                }
            } else if (ch == '%') {
                reverse(result.begin(), result.end());
            } else {
                result += ch;
            }
        }

        return result;
    }
};
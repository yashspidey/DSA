

class Solution {
public:
    string processStr(string s) {

        string result;
       

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
class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int i = 0;
        int j = 0;
        int write = 0;

        while (j < n) {

            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            int length = j - i;

            chars[write] = chars[i];
            write++;

            if (length > 1) {
                string cnt = to_string(length);
                for (char c : cnt) {
                    chars[write] = c;
                    write++;
                }
            }
            i = j;
        }

        return write;
    }
};
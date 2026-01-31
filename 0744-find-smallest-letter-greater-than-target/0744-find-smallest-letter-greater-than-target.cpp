class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();
        int s = 0;
        int e = n - 1;
        char ans = '{';

        while (s <= e) {

            int mid = s + (e - s) / 2;
            char ch = letters[mid];

            if (ch > target) {
                ans = ch; // could be possoble ans so we store and search in the
                          // extreme left until we find answer.
                e = mid - 1;

            } else {
                s = mid + 1;
            }
        }

        if (ans == '{') {
            return letters[0];
        }
        return ans;
    }
};
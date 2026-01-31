class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();
        char ans = '{'; // INT_MAX wont work here, so we know all array elements
                        // are guaranteed lowercase english letters, so max
                        // value will be 'z', so we will keep '{' as a
                        // replacement of INT_MA basically a char version.

        for (int i = 0; i < n; i++) {

            if (letters[i] > target) {
                ans = min(ans, letters[i]);
            }
        }

        if (ans == '{') {
            return letters[0];
        }
        return ans;
    }
};
class Solution {
public:
    int maximumLengthSubstring(string s) {

        int n = s.size();
        unordered_map<char, int> mp;
        int i = 0;
        int m = 2;

        for (int j = 0; j < n; j++) {

            mp[s[j]]++;

            if (mp[s[j]] == 3) {

                while (mp[s[j]] == 3) {
                    mp[s[i]]--;
                    i++;
                }
            }
            m = max(m, j - i + 1);
        }

        return m;
    }
};
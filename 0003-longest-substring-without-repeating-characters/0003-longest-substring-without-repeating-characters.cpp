class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        unordered_map<char, int> mp;
        int mx = 0;
        for (int r = 0; r < n; r++) {
            mp[s[r]]++;

            if (mp[s[r]] > 1) {
                while (mp[s[r]] > 1) {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0) {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            mx = max(mx, r - l + 1);
        }

        return mx;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        unordered_map<char, int> mp;
        int mx = 0;
        for (int r = 0; r < n; r++) {
            mp[s[r]]++;

            if (mp.size() < r-l+1) {
                while (mp.size() < r-l+1) {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0) {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            int z = mp.size();
            mx = max(mx, z);
        }

        return mx;
    }
};
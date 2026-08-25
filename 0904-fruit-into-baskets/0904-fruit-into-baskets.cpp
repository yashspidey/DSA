class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int l = 0;
        int mx = 1;
        for (int r = 0; r < n; r++) {
            mp[fruits[r]]++;
            if (mp.size() > 2) {
                while (mp.size() > 2) {
                    mp[fruits[l]]--;
                    if (mp[fruits[l]] == 0) {
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
                mx = max(mx, r - l + 1);

        }

        return mx;
    }
};
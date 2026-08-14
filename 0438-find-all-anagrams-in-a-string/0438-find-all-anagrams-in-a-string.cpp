class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<int> arr(26, 0);
        vector<int> res;
        int i = 0;

        for (auto& ch : p) {
            arr[ch - 'a']++;
        }

        for (int j = 0; j < m; j++) {

            arr[s[j] - 'a']--;

            if (j - i + 1 < n) {
                continue;
            } else {

                if (arr == vector<int>(26, 0)) {
                    res.push_back(i);
                }
                arr[s[i] - 'a']++;
                i++;
            }
        }
        return res;
    }
};
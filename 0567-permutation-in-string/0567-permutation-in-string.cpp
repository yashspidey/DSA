class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int k = s1.size();
        int n = s2.size();
        vector<int> arr(26, 0);
        int i = 0;

        for (auto c : s1) {
            arr[c - 'a']++;
        }

        for (int j = 0; j < n; j++) {
            char ch = s2[j];
            arr[ch - 'a']--;

            if (j - i + 1 < k) {
                continue;
            } else {

                if (arr == vector<int>(26, 0)) {
                    return true;
                }
                arr[s2[i] - 'a']++;
                i++;
            }
        }

        return false;
    }
};
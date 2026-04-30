class Solution {
public:
    bool possible(vector<int>& bloomDay, int currDay, int m, int k) {

        int possibleBoquets = 0;
        int count = 0;
        int n = bloomDay.size();

        for (int i = 0; i < n; i++) {

            if (currDay >= bloomDay[i]) {
                count++;
            } else {
                possibleBoquets += count / k;
                count = 0;
            }
        }

        possibleBoquets += count / k;

        if (possibleBoquets >= m) {
            return true;
        } else {
            return false;
        }
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();
        long long reqFlowers = (long long)m * k;

        if (reqFlowers > n) {
            return -1;
        }

        int maxDay = *max_element(bloomDay.begin(), bloomDay.end());
        int minDay = *min_element(bloomDay.begin(), bloomDay.end());

        int low = minDay;
        int high = maxDay;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            bool Possible = possible(bloomDay, mid, m, k);

            if (Possible) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    };
};
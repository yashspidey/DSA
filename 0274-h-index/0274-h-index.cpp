class Solution {
public:
    bool valid(vector<int>& citations, int h) {

        int count = 0;

        for (int i = 0; i < citations.size(); i++) {

            if (citations[i] >= h) {
                count++;
            }

            if (count == h) {
                return true;
            }
        }

        return false;
    }

    int hIndex(vector<int>& citations) {

        int low = 1;
        int high = 5000;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (valid(citations, mid)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high;
    }
};
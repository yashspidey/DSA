class Solution {
public:
    bool valid(vector<int>& weights, int capacity, int days) {

        int n = weights.size();
        int calcDays = 0;
        int totalWeights = 0;

        for (int i = 0; i < n; i++) {

            if (weights[i] > capacity) {
                return false;
            } else if (totalWeights + weights[i] <= capacity) {
                totalWeights += weights[i];
            } else {
                calcDays++;
                totalWeights = weights[i];
            }
        }

        if (totalWeights <= capacity) {
            calcDays++;
        }

        return calcDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();
        int low = 1;
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (valid(weights, mid, days)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
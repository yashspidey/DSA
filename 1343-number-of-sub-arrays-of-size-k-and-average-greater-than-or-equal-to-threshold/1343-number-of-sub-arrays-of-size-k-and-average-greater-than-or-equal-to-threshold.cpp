class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();

        int i = 0;
        long sum = 0;
        long double avg = 0;
        int cnt = 0;

        for (int j = 0; j < n; j++) {

            sum += arr[j];

            if (j - i + 1 < k) {
                continue;
            } else {

                avg = sum / (j - i + 1);
                if (avg >= threshold) {
                    cnt++;
                }
                sum -= arr[i];
                i++;
            }
        }

        return cnt;
    }
};
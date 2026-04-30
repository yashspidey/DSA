class Solution {
public:
    bool ls(vector<int>& arr, int integer) {

        int n = arr.size();

        for (int i = 0; i < n; i++) {

            if (integer == arr[i]) {
                return true;
            }
        }

        return false;
    }

    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();
        int count = 0;

        for (int i = 1; i <= INT_MAX; i++) {

            if (!ls(arr, i)) {
                count++;
            }

            if (count == k) {
                return i;
            }
        }

        return -1;
    }
};
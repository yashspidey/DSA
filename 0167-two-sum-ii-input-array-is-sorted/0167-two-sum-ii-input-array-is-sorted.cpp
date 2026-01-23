class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();

        for (int i = 0; i < n; i++) {

            int need = target - numbers[i];
            int s = 0;
            int e = n - 1;

            while (s <= e) {
                int mid = s + (e - s) / 2;

                if (numbers[mid] > need) {
                    e = mid - 1;
                } else if (numbers[mid] < need) {
                    s = mid + 1;
                } else {
                    return {i + 1, mid + 1};
                }
            }
        }

        return {};
    }
};
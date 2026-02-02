class Solution {
public:
    int countMonobit(int n) {
        int count = 1;

        for (int i = 1;; i++) {
            int val = (1 << i) - 1;
            if (val > n) {
                break;
            }
            count++;
        }
        return count;
    }
};
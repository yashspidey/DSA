class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            long long nsum = 0;
            for (int j = i; j < n; j++) {

                nsum += nums[j];
                long long sum = nsum;
                int ld = sum % 10;
                long long rsum = 0;
                while (sum) {
                    int ld = sum % 10;
                    sum /= 10;
                    rsum = (rsum * 10) + ld;
                }

                int rld = rsum % 10;
                if (ld == x && rld == x)
                    cnt++;
            }
        }
        return cnt;
    }
};
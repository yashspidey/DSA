class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n = nums.size();
        set<int> st;
        int flag = 1;

        if (n == 1) {
            return nums[0] + 1;
        }

        if (nums[0] + 1 == nums[1]) {
            flag = 0;
        }

        int ms = 0;

        for (int i = 0; i < n - 1; i++) {
            st.insert(nums[i]);
        }
        int sum = nums[0];
        int i = 0;
        for (int j = i + 1; j < n; j++) {

            if (nums[j] == nums[j - 1] + 1) {
                sum += nums[j];
            } else {
                break;
            }
        }
        st.insert(nums[n - 1]);

if(flag = 0){
    sum = nums[0];
}

        while (true) {

            if (!st.count(sum)) {
                break;
            } else {
                sum++;
            }
        }

        if (flag or sum == 0) {
            return nums[0] + 1;
        }
        cout << sum;
        return sum;
    }
};
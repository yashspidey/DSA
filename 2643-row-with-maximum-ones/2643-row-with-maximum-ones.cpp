class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
          int m = mat.size();
        int n = mat[0].size();
        int maxCount = 0;
        int rowIdx = 0;

        for (int i = 0; i < m; i++)
        {

            int count = 0;

            for (int j = 0; j < n; j++)
            {

                if (mat[i][j] == 1)
                {
                    count++;
                }
            }

            if (count > maxCount)
            {
                maxCount = count;
                rowIdx = i;
            }
        }

        return {rowIdx, maxCount};
    }
};
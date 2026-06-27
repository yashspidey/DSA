class Solution {
public:
    int minLights(vector<int>& lights) {
        // [0,0,0,2,0]

        vector<long long> litup(lights.size() + 1, 0);
        int n = lights.size();

        for (int i = 0; i < lights.size(); i++) {

            if (lights[i] != 0) {

                int v = lights[i];

                litup[max(0, i - v)] += v;
                litup[min(n - 1, i + v) + 1] -= v;
            }
        }

        for (int i = 1; i < lights.size(); i++) {
            litup[i] += litup[i - 1];
        }
        litup.pop_back();

        // 0 , 0, 1 ,0 ,0, 1, 1, 1
        int bulb = 0;
        for (int i = 0; i < litup.size(); i++) {
            if (litup[i] == 0) {
                bulb++;
                i += 2;
            }
        }

        return bulb;
    }
};
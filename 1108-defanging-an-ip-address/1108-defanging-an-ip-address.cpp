class Solution {
public:
    string defangIPaddr(string address) {

        stringstream ss(address);
        string token = "";
        string result = "";

        while (getline(ss, token, '.')) {

            result = result + token + "[.]";
        }

        int n = result.size();

        return result.substr(0, n - 3);

        // 1[.]1[.]1[.]1[.]
    }
};
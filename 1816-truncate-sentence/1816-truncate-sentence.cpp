class Solution {
public:
    string truncateSentence(string s, int k) {

        stringstream ss(s);
        string token = "";
        s = "";

        while (ss >> token && k--) {
            s += token + " ";
        }

        s.pop_back();
        return s;
    }
};
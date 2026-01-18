class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int ra;
        int ia;
        int rb;
        int ib;
        stringstream ss1(num1);
        stringstream ss2(num2);
        stringstream ans;
        char buff;

        ss1 >> ra >> buff >> ia >> buff;
        ss2 >> rb >> buff >> ib >> buff;

        ans << ra * rb - ia * ib << "+" << ra * ib + rb * ia << "i";

        return ans.str();
    }
};
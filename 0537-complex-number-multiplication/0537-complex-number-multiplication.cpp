class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int p1 = 0;
        int p2 = 0;

        for (int i = 0; i < num1.size(); i++) {
            if (num1[i] == '+') {
                p1 = i;
                break;
            }
        }
        for (int i = 0; i < num2.size(); i++) {
            if (num2[i] == '+') {
                p2 = i;
                break;
            }
        }

        int a = stoi(num1.substr(0, p1));
        int b = stoi(num1.substr(p1 + 1));
        int c = stoi(num2.substr(0, p2));
        int d = stoi(num2.substr(p2 + 1));

        int real = a * c - b * d;
        int imaginary = a * d + b * c;

        string ans = "";

        ans += to_string(real);
        ans += "+";
        ans += to_string(imaginary);
        ans += "i";

        return ans;
    }
};
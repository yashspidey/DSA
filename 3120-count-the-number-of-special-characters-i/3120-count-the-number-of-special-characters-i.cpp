class Solution {
public:
    int numberOfSpecialChars(string word) {

        int count = 0;
        set<char> st;

        for (char letter : word) {

            if (letter < 'a') {
                continue;
            }

            if (st.count(letter)) {
                continue;
            }

            char lowercaseWord = letter;

            char uppercaseWord = lowercaseWord - 32;

            for (int i = 0; i < word.size(); i++) {

                if (word[i] == uppercaseWord) {
                    count++;
                    break;
                }
            }

            st.insert(letter);
        }

        return count;
    }
};
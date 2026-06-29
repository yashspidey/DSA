class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
int cnt = 0;
int n = patterns.size();
for(int i = 0; i < n; i++){
 string w = patterns[i];
 if(word.find(w) != string::npos)cnt++;
}
return cnt;




    }
};
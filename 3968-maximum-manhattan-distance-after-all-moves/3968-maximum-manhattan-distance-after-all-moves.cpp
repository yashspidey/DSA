class Solution {
public:
    int maxDistance(string moves) {
        
        int x = 0, y = 0;
        int cnt = 0;
        for(auto u:moves){
            if(u == 'U') y++;
            else if(u == 'D') y--;
            else if(u == 'L') x--;
            else if(u == 'R') x++;
            else cnt++;
        }
        return abs(x)+abs(y)+cnt;



    }
};
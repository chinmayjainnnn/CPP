class Solution {
public:
    bool judgeCircle(string m) {
        int x=0,y=0;
        int n=m.size();

        for(int i=0;i<n;i++){
            char c=m[i];
            if(c=='R'){
                x+=1;
            }
            else if(c=='L'){
                x-=1;
            }
            else if(c=='U'){
                y+=1;
            }
            else{
                y-=1;
            }
        }
    if(!x && !y)return true;

    return false;
    }
};
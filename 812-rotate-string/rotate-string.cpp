class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        int i=0,j=0;
        int temp=0;
        if(n!=m)return false;
        while(i!=n){
            if(s[i]==goal[0]){
                for(j=0;j<n;j++){
                    if(s[(i+j)%n]!=goal[j]){temp=0;break;}
                    else{temp=1;}
                }
            }
            if(temp){return true;}
            i++;
        }
    return false;}
};
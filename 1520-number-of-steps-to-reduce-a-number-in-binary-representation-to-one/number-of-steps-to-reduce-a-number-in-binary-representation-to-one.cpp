class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int carry=0,count=0;
        for(int i=n-1;i>0;i--){
            if((carry && s[i]=='1') || ( !carry && s[i]=='0') ){
                    count+=1;
            }
            else{
                carry=1;
                count+=2;
            }
            
        }
        if((carry && s[0]=='1') || ( !carry && s[0]=='0') ){
                    count+=1;
            }
        return count;

    }
};
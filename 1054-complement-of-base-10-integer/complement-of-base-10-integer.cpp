class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        
        int len=0,t=n;
        while(t){
            len++;
            t=t/2;
        }
        return pow(2,len)-1-n;
    }
};
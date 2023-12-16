class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){return 1;}
        int rem,comp=0,i=0,dec=0;
        while(n!=0)
        {
            rem=1-(n&1);
            dec=dec+(rem)*(pow(2,i));
            i++;
            n=n>>1;
        }
        return dec;
    }
};
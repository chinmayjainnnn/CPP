class Solution {
public:
    int findComplement(int num) {
        int rem,comp=0,i=0,dec=0;
        while(num!=0)
        {
            rem=1-(num&1);
            dec=dec+(rem)*(pow(2,i));
            i++;
            num=num>>1;
        }
        return dec;
    }
};
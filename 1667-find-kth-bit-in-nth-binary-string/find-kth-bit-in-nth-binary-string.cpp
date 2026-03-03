class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1)return '0';
        int len=(1<<n)-1;

        if(k==len/2+1)return '1';
        else if(k<len/2+1){return findKthBit(n-1,k );}
        char c= findKthBit(n-1,len-k+1 );
        if(c=='1')return '0';
        return '1'; 
    }
};
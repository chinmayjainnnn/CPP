class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans=0,rev=0;
        n=n-1;
        int len=0;
        while(n || x){
            if(x%2==0){
                ans=ans*2 + n%2;
                n=n/2;
            }
            else{
                ans=ans*2+1;
            }
            x=x/2;
            len++;
        }
        while(len--){
            rev=rev*2+ ans%2;
            ans=ans/2;
        }

        
    return rev;
    }
};
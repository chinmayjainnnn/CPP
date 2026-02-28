class Solution {
public:

    int concatenatedBinary(int n) {
        long long ans=1,bits=1;
        long long mod = 1e9 + 7;
        
        for(int i=2;i<n+1;i++){
            if(!(i & i-1))bits++;
            ans=((ans<<bits)|i)%mod;
        }
        return ans;
    }
};
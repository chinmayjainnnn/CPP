class Solution {
public:
    long long rec(int r_zeros,int r_ones,int last,int limit,vector<vector<vector<long long>>> &mem){
        if(r_zeros==0 && r_ones==0){return 1;}
        if(mem[r_zeros][r_ones][last]!=-1)return mem[r_zeros][r_ones][last]; 
        
        long long ans=0;
        long long mod=1e9+7;
        if(last==0){
            for(int i=1;i<=min(r_ones,limit);i++){
                ans+=(rec(r_zeros,r_ones-i,1,limit,mem))%mod;
            }
        }
        else{
            for(int i=1;i<=min(r_zeros,limit);i++){
                ans+=(rec(r_zeros-i,r_ones,0,limit,mem))%mod;
            }
        }
        mem[r_zeros][r_ones][last]=ans;
        return ans%mod;
        

    }
    int numberOfStableArrays(int zero, int one, int limit) {
        long long mod=1e9+7;
        vector<vector<vector<long long>>> mem(zero+1,vector<vector<long long>>(one+1,vector<long long>(2,-1)));
        
        return (rec(zero,one,1,limit,mem)+rec(zero,one,0,limit,mem))%mod;
    }
};
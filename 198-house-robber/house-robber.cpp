#include<bits/stdc++.h>
class Solution {
public:
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1) return nums[0];
        vector<int> dp(n);
        
        for(int i=0;i<n;i++){
            if(i<2){
                dp[i]=nums[i];
                continue;
            }
            if(i==2){dp[2]=dp[0]+nums[2];continue;}
            // temp=max()
            dp[i]=nums[i]+ max(dp[i-2],dp[i-3]) ;
            // cout<< dp[i]<<endl;
        }
        
        return max(dp[n-1],dp[n-2]);
    }
};
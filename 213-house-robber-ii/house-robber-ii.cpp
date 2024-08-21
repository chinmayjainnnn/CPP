class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        if(n<=3){
            return max(nums[0],max(nums[1],nums[2]));
        }
        
        vector<int> dp(n);
        
        for(int i=0;i<n-1;i++){
            if(i<2){
                dp[i]=nums[i];
                continue;
            }
            if(i==2){dp[2]=dp[0]+nums[2];continue;}
            // temp=max()
            dp[i]=nums[i]+ max(dp[i-2],dp[i-3]) ;
            
        }
        
        int maxi=max(dp[n-3],dp[n-2]);
        dp[0]=0;
        for(int i=1;i<n;i++){
            if(i<3){
                dp[i]=nums[i];
                continue;
            }
            if(i==3){dp[3]=dp[1]+nums[3];continue;}
            dp[i]=nums[i]+ max(dp[i-2],dp[i-3]) ;
            
        }

        maxi=max(maxi,max(dp[n-1],dp[n-2]));

        return maxi;
    }
    
};
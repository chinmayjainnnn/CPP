class Solution {
public:
    int robb(vector<int>& nums,int start,int end) {
        vector<int> dp(nums.size(),0);
        
        for(int i=start;i<end;i++){
            if(i<2+start){
                dp[i]=nums[i];
                continue;
            }
            if(i==2+start){dp[start+2]=dp[start]+nums[i];continue;}
            
            dp[i]=nums[i]+ max(dp[i-2],dp[i-3]) ;
        }
        
        return max(dp[end-1],dp[end-2]);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[1],nums[0]);
        if(n==3)return max(nums[0],max(nums[1],nums[2]));
        
        return max(robb(nums,0,n-1),robb(nums,1,n));
    }

    
};
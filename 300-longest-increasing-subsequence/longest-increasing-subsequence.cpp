class Solution {
public:
    int rec(vector<vector<int>> &dp,vector<int> &nums,int curr,int last ){
        // cout<<curr<<" "<<last;
        if(curr==nums.size())return 0;
        if(dp[curr][last+1]!=-1) return dp[curr][last+1];
        int take=0;
        if(last==-1 || nums[curr]>nums[last]){
            take=  1+ rec(dp,nums,curr+1,curr);
        }
        
        int not_take=rec(dp,nums,curr+1,last);
        
        return dp[curr][last+1]=max(take,not_take);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return rec(dp,nums,0,-1);
    }
};
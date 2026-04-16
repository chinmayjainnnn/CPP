class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        vector<int> dp(n,0);
        int ans=nums[0];
        for(int i=0;i<n-1;i++){
            
            ans=max(nums[i],ans-1);
            if(ans<1)return false;
            

        }
        if(ans>0)return true;
        return false;

    }
};
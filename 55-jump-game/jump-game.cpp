class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if(nums[i]<1)return 0;
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(i>maxi)return 0;
            
            maxi=max(maxi,i+nums[i]);
            
        }
        
        
        return 1;
    }
};
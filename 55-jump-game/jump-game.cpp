class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if(nums[i]<1)return 0;
        int n=nums.size();
        int max=nums[0];
        for(int i=1;i<n-1;i++){
            if(i>max)break;
            else if(max<i+nums[i])max=i+nums[i];
            
        }
        if(max>=n-1)return 1;
        return 0;
    }
};
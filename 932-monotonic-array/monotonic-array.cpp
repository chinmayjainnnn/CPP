class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int flag1=0,flag2=0;
        for(int i=0;i<n-1;i++){
            
            if(nums[i]>nums[i+1]) flag1=1;
            if(nums[i]<nums[i+1]) flag2=1;
        }
    if( flag1 && flag2 ) return false;
    return true;
    }
};
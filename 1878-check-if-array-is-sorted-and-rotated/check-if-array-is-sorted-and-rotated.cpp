class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return true;        
        int i=0;
        
        while((i<n-1) && (nums[i]<=nums[i+1]) ){
            i++;
        }
        if(i==n-1)return true;
        i++;
        for(;i<n-1;i++){
            if(nums[i]>nums[i+1])return false;
        }
        cout<<" "<<i;
        if( nums[i]>nums[0])return false;
        return true;
    }
};
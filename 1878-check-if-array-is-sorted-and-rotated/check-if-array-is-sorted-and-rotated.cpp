class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while( (i<n) && (nums[i]>=nums[0]) && nums[i-1]<=nums[i] ){
            i++;
        }
        if(i==n ){return true;}
        
        while( (i<n) && (nums[i]<=nums[n-1])  ){
            i++;
        }
        
        if(i==n && (nums[0]>= nums[n-1]))return true;
        return false;
    }
};
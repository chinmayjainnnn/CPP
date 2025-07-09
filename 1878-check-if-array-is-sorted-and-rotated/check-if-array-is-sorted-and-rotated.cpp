class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return 1;
        int i=1;

        while(i<n && nums[i]>=nums[i-1])i++;
        if(i==n)return 1;
        // cout<<i<<" "<<endl;
        i++;
        while(i<n && nums[i]>=nums[i-1])i++;
        // cout<<i<<" "<<endl;
        if( i==n && nums[0]>=nums[n-1]  )return 1;
        // cout<<i<<" "<<endl;
        return 0;
    }
};
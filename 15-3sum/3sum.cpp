class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int target= -nums[i];

            int l=i+1,r=n-1;
            
            while(l<r){
                // cout<<i<<" "<<l<<" "<<r<<endl;
                if(nums[l]+nums[r]==target){
                    ans.push_back({-target,nums[l],nums[r]});
                    
                    l++;
                    r--;
                    while(l<n && nums[l]==nums[l-1])l++;
                    while(r>l && nums[r]==nums[r+1])r--;
                    
                }
                else if(nums[l]+nums[r]<target)l++;
                else r--;
            }
            

        }
    return ans;
    }
};
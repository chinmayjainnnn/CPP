class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        // unordered_map

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum = -nums[i];
            int j = i+1, k = n-1;
            while(j<k){
                if(nums[j]+nums[k]==sum){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    // cout<<ans.back()[0]<<" ";
                    while(j<k && nums[j]==nums[j+1])
                        j++;
                    while(k>j && nums[k]==nums[k-1])
                        k--;
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]>sum)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};
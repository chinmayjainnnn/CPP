class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        map<int,vector<int>> mp;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &[key,val]:mp){

            if(val.size()<3)continue;
            int m=val.size();
            for(int i=0;i<m-2;i++){
                ans=min(ans,(val[i+2]-val[i])*2);
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};
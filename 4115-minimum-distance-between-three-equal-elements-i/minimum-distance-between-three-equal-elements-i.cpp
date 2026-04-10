class Solution {
public:
    
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i:nums){
            mp[i]++;
        }
        int ans=1e9;
        for(auto it:mp){
            int val=it.first,count=it.second;
            if(count>2){
                vector<int> arr;
                for(int i=0;i<nums.size();i++){
                   if(nums[i]==val)arr.push_back(i);
                }
                // cout<<val<<endl;
                // cout<<count<<endl;  
                // cout<<arr.size()<<endl;
                for(int i=0;i<arr.size()-2;i++){
                    ans=min(ans,2*(arr[i+2]-arr[i]));
                }
            }
        }
        if(ans==1e9)return -1;
        return ans;
    }
};
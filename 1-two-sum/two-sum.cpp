class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int start=0,end=nums.size()-1;
        for(int i=0;i<end+1;i++)
            mp[nums[i]]=i;
        for(int i=0;i<=end;i++){
            if(mp.find(target-nums[i])!=mp.end() && i!= mp[target-nums[i]]){
                return {i,mp[target-nums[i]]};
            }
            
        }        
        return{0,1};
    }
};
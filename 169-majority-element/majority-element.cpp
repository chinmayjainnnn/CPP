class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        int n=nums.size();
        for(int i=0;i<n;i++){
            um[nums[i]]+=1;
        }
        int count=0;
        int val=0;
        for(auto x :um){
            if(x.second>count){
                count=x.second;
                val=x.first;
            }
        }
        return val;
    }
};
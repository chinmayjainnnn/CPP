class Solution {

public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        int n=nums.size();
        for(int i=0;i<n;i++){
            um[nums[i]]+=1;
        }
       
        for(auto x :um){
            if(x.second>(n/2)){
                return x.first;
            }
        }
    return 0; 
    }
};

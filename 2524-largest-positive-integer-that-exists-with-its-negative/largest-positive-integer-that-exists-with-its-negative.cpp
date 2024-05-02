class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> ump;
        int max=-10;
        for(int i=0;i<n;i++){
            if(ump[-nums[i]] ==1  ){
                if(max< abs(nums[i])  ){
                    max=abs(nums[i]);
                }
            }
            ump[nums[i]]=1;
        }
    if(max==-10){
        return -1;
    }
    return max;
    }
};
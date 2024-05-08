class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> arr;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(arr.find(temp)!=arr.end()){
                return {i,arr[temp]};
            }
            arr[nums[i]]=i;   
        }
    return {-1,-1};
    }
};
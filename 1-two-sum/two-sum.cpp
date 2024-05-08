class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> arr;
        vector<int> ret;
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(arr.find(temp)!=arr.end()){
                ret.push_back(arr[temp]);
                ret.push_back(i);
                return ret;
            }
            arr[nums[i]]=i;   
        }
    // cout<<"1";
    return ret;
    }
};
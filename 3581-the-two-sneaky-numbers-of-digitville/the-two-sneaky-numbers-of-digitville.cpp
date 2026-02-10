class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        vector<int> count(n,0);
        for(int i=0;i<n;i++){
            count[nums[i]]++;
            if(count[nums[i]]>1)ans.push_back(nums[i]);
        }
    return ans;
    }
};
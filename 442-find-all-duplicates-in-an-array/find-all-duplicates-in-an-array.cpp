class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            if(freq[nums[i]]++ == 1 )ans.push_back(nums[i]);
            // cout<<nums[i]
        }
        return ans;
    }
};
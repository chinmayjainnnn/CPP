class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        // for(int i:nums)sum+=i;
        int mid=nums[n/2];
        
        for(int i:nums)sum+=abs(i-mid);
        return sum;
    }
};
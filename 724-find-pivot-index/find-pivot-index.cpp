class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n);
        int ans,total;
        leftsum[0]=0;
        for(int i=1;i<n;i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        total=leftsum[n-1]+nums[n-1];
        for(int i=0;i<n;i++){
            int l=leftsum[i];
            if(l==total-l-nums[i])return i;
        }
        return -1;
    }
};
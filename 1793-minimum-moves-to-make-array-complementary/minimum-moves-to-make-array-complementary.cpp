class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<int> da(2*limit+2,0);
        
        for(int i=0;i<n/2;i++){
            int a=min(nums[i],nums[n-i-1])+1;
            int b=max(nums[i],nums[n-i-1])+limit;
            da[2]+=2;
            da[2*limit+1]-=2;
            da[a]-=1;
            da[b+1]+=1;
            da[nums[i]+nums[n-i-1]]-=1;
            da[nums[i]+nums[n-i-1]+1]+=1;
        }
        int mini=da[2];
        for(int i=2;i<=2*limit;i++){
            da[i]+=da[i-1];
            mini=min(mini,da[i]);
        }
        return mini;
    }
};
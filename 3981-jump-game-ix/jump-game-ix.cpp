class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,0);
        int maxi=0;
        int m=n-1;
        for(int i=0;i<n;i++){
            pre[i]=max(maxi,nums[i]);
            maxi=pre[i];
        }
        for(int i=n-2;i>=0;i--){
            if(pre[i]>nums[m])pre[i]=pre[m];
            if(nums[m]>nums[i])m=i;
        }
        return pre;
    }
};
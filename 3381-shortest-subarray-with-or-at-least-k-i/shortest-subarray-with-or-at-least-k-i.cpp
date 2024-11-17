class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int mini=n+1;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n ;j++){
                sum |=nums[j];
                if(sum>=k){
                    mini=min(mini,j-i+1);
                    break;
                }
            }
        }
        if(mini==n+1)return -1;
        return mini;
    }
};
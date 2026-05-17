class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1,mid,ans=nums[n-1];
        while(e>=s){
            mid=s+(e-s)/2;
            int x=nums[mid];
            ans=min(ans,x);
            if(x>nums[s]){ans=min(ans,nums[s]);s=mid+1;}
            else if(x<nums[s])e=mid-1;
            else s++;
        }
        return ans;
    }
};
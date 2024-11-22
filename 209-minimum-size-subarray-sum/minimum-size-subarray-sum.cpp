class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,sum=0,mini=INT_MAX;
        nums.push_back(0);
        while(l<=r && r<=n){
            if(sum<target){
                sum+=nums[r];
                r++;
            }
            else{
                sum-=nums[l];
                l++;
            }
            if(sum>=target)mini=min(mini,r-l);
            // cout<<l<<" "<< r<<" "<<sum<<" "<<mini<<endl;

        }
    
    if(mini == INT_MAX)return 0;
    return mini;
    }
};
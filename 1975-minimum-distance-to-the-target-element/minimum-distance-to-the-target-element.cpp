class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=1e5;
        int n=nums.size();
        n=max(n-start,start);
        // cout<<"n="<<n<<endl;
        for(int i=0;i<=n;i++){
            if(start+i<nums.size() && nums[start+i]==target){
                ans=min(ans,i);
                break;
            }
            if(start-i>=0 && nums[start-i]==target){
                ans=min(ans,i);
                break;
            }
            // cout<<"left ="<<start-i<<" right="<<start+i<<endl;
        }
        return ans;
    }
};
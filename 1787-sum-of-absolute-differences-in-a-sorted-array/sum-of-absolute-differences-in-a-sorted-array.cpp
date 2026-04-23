class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n+1,0);
        vector<int> ans(n,0);
        int last=0;
        for(int i=0;i<n;i++){
            pre[i]=last+nums[i];
            last=pre[i];
            
        }
        for(int i=0;i<n;i++){
            int left=i>0? (i*nums[i]-pre[i-1]):0;
            int right= i<n-1? (pre[n-1]-pre[i] - (n-1-i)*nums[i]):0;
            // cout<<"i="<<i<<" "<<left<<" "<<right<<endl;
            ans[i]=left+right;
        }
        return ans;
        }
};
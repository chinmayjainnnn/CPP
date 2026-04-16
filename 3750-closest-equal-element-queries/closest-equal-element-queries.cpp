class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int m=queries.size();
        vector<int> ans(m,-1);
        for(int j=0;j<m;j++ ){
            auto &arr=mp[nums[queries[j]]];
            if (arr.size()==1)continue;
            int mid=(int)(lower_bound(arr.begin(),arr.end(),queries[j])-arr.begin());
            int a=arr[(mid+1)%arr.size()];
            int b=arr[(mid-1+arr.size())%arr.size()];
            ans[j]=min((a-queries[j]+n)%n,(queries[j]-b+n)%n );
        }
    return ans;
    }
};
class Solution {
public:
    
    int minimumEffort(vector<vector<int>>& tasks) {
        int n=tasks.size();
        int ans=0,last=0;
        sort(tasks.begin(),tasks.end(),[](const vector<int> a,const vector<int> b){
        return a[1]-a[0]>b[1]-b[0];
    });
        for(int i=n-1;i>=0;i--){
            ans=ans+tasks[i][0];
            ans=max(ans,tasks[i][1]);
        }
        return ans;
    }
};
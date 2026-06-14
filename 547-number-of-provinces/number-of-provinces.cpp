class Solution {
public:

    void dfs(int node,vector<int>& vis,vector<vector<int>>& arr){
        vis[node]=1;
        for(int i=0;i<vis.size();i++){
            if(vis[i]==0 && arr[node][i]){
                vis[i]=1;
                dfs(i,vis,arr);
            }
        }
        return;
    }


    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int> vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ans++;
                dfs(i,vis,arr);
            }
        }
        return ans; 
    }
};
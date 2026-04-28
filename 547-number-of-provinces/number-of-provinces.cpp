class Solution {
public:
    void dfs(int v,vector<int> &vis,vector<vector<int>>& is){
        vis[v]=1;
        int n=is.size();
        for(int i=0;i<n;i++){
            if(is[v][i]==1 && vis[i]==0){
                vis[i]=1;
                dfs(i,vis,is);
            }
        }
    }   
    
    int findCircleNum(vector<vector<int>>& is) {
        int n=is.size(),ans=0;
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ans++;
                dfs(i,vis,is);
            }
        }
        return ans;
        
    }
};
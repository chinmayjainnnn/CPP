class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> vis(n,0);
        int e=edges.size();
        for(int i=0;i<e;i++){
            vis[edges[i][1]]=1;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                e=i;
            }
        }
    if(count==1){
        return e;
    }
    return -1;
    }
};
class Solution {
public:
    int bfs(vector<vector<int>> &adj,int n){
        queue<int> q;
        q.push(0);

        vector<int> visited(n,0);
        visited[0]=1;
        int distance=0;

        while(!q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                int curr=q.front();
                q.pop();
                if(curr==n-1)return distance;

                for( auto neig :adj[curr]){
                    if(visited[neig]==1)continue;
                    visited[neig]=1;
                    q.push(neig);
                    
                }

            }
            distance++;
        }
        return distance;
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n);
        vector<int> ans;

        for(int i=0;i<n-1;i++){
            adj[i].push_back(i+1);
        }
        int q=queries.size();
        for(int j=0;j<q;j++){
            adj[queries[j][0]].push_back(queries[j][1]);
            ans.push_back(bfs(adj,n));
        }
        return ans;
    }
};
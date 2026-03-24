class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        vector<long > suf(n*m,1);
        vector<long > pre(n*m,1);
        
        for(int i=1;i<n*m;i++){
            
            int x=(i-1)/m;
            int y=(i-1)%m;
            
            pre[i]=(pre[i-1]*(grid[x][y]))%12345;
            // cout<<i<<" "<<pre[i]<<endl;
        }
        for(int i=n*m-2;i>=0;i--){
            int x=(i+1)/m;
            int y=(i+1)%m;
            suf[i]=(suf[i+1]*grid[x][y])%12345;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=(pre[i*m+j]*suf[i*m+j])%12345;
            }
        }
        return ans;

    }
};
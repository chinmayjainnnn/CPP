class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        const long long mod = 1e9 + 7;
        vector<vector<long long>> maxi(n,vector<long long>(m));
        vector<vector<long long>> mini(n,vector<long long>(m));

        maxi[0][0]=grid[0][0];
        mini[0][0]=grid[0][0];

        for(int i=1;i<n;i++){
            maxi[i][0]=maxi[i-1][0]*grid[i][0];
            mini[i][0]=maxi[i][0];

        }
        for(int j=1;j<m;j++){
            maxi[0][j]=maxi[0][j-1]*grid[0][j];
            mini[0][j]=maxi[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                int val=grid[i][j];
                long a=maxi[i-1][j]*val;
                long b=mini[i-1][j]*val;
                long c=mini[i][j-1]*val;
                long d=maxi[i][j-1]*val;


                
                maxi[i][j]=max({a,b,c,d});
                mini[i][j]=min({a,b,c,d});
                

                
            }
        }
        if(maxi[n-1][m-1]<0)return -1;
        return maxi[n-1][m-1]%mod;
    }
};
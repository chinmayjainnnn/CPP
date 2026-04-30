class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k+1,-1) ));
        
        if(grid[0][0])dp[0][0][1]=grid[0][0];
        else dp[0][0][0]=0;
        
        for(int i=1;i<n;i++){
            int val=grid[i][0];
            for(int c=0;c<=k;c++){
                if(c+(val>0)>k)continue;
                if(dp[i-1][0][c]!=-1){
                    dp[i][0][c+ (val>0)]=val+dp[i-1][0][c];        
                }
            }
        }
        for(int i=1;i<m;i++){
            int val=grid[0][i];
            for(int c=0;c<=k;c++){
                if(c+(val>0)>k)continue;
                if(dp[0][i-1][c]!=-1){
                    dp[0][i][c+ (val>0)]=val+dp[0][i-1][c];        
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int  j=1;j<m;j++){
                for(int c=0;c<=k;c++){
                    
                    int val=grid[i][j];
                    if(c-(val>0) <0)continue;
                    int top = dp[i-1][j][c-(val>0)]>=0?dp[i-1][j][c-(val>0)]:-1;
                    int left= dp[i][j-1][c-(val>0)]>=0?dp[i][j-1][c-(val>0)]:-1;
                    if(top==-1 && left==-1)continue;                 
                    dp[i][j][c]=max(top,left )+val;                        
                }
            }
        }

        int maxi=-1;
        for(int c=0;c<=k;c++){
            maxi=max(maxi,dp[n-1][m-1][c]);
        }
        return maxi;
    }
};
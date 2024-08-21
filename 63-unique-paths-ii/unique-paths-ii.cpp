class Solution {
public:
    long uniquePathsWithObstacles(vector<vector<int>>& og) {
        

        int m=og.size(),n=og[0].size();
        if(og[0][0]==1 || og[m-1][n-1]==1)return 0; 
        vector<vector<long >> dp(m,vector<long>(n));
        dp[m-1][n-1]=1;
        for(int i=m-2;i>=0;i--){
            if(dp[i+1][n-1]==0 || og[i][n-1]==1) 
                dp[i][n-1]=0;
            else 
                dp[i][n-1]=1;
        }
        for(int i=n-2;i>=0;i--){
            if(dp[m-1][i+1]==0 || og[m-1][i]==1) 
                dp[m-1][i]=0;
            else 
                dp[m-1][i]=1;
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(og[i][j]==1) 
                    dp[i][j]=0;
                else 
                    dp[i][j]= dp[i+1][j] + dp[i][j+1];
            }
        }
        

        return dp[0][0];
    }
};
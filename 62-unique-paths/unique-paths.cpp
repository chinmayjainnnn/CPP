class Solution {
public:
    
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)return 1;
        vector<vector<int> > dp(m,vector<int>(n,1));
        
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dp[i][j]=dp[1+i][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};
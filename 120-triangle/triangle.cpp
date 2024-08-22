class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 )dp[i][j]=triangle[i][j]+dp[i-1][j];
                else if(j==i )dp[i][j]=triangle[i][j]+dp[i-1][j-1];
                else{
                    dp[i][j]=min(dp[i-1][j-1],dp[i-1][j])+triangle[i][j];
                }
                
            }
            
        }
        int maxi=INT_MAX;
        for(int j=0;j<n;j++){
            maxi=min(maxi,dp[n-1][j]);
        }
    return maxi;
    }
};
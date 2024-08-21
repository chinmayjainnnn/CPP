class Solution {
public:
    int rec(vector<vector<int>> &dp,int m,int n){
        if(m==2 && n==2)return 2;
        if(m==1||n==1)return 1;
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        return dp[m][n]=rec(dp,m-1,n)+rec(dp,m,n-1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int> > dp(m+1,vector<int>(n+1,-1));
        return rec(dp,m,n);
    }
};
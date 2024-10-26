class Solution {
public:
    
    int longestCommonSubsequence(string str1, string str2) {
        int n1=str1.size(),n2=str2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(str1[i]==str2[j])
                    dp[i+1][j+1]=1+dp[i][j];
                else
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                
            }
            
        }

        
        return dp[n1][n2];
    }
};
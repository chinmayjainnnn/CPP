class Solution {
public:
    
    int minDistance(string w1, string w2) {
        int n1=w1.size(),n2=w2.size();
        if(n1==0)return n2;
        if(n2==0) return n1;
        // cout<<n1<<" "<<n2<<endl;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1));
        dp[0][0]=0;
        for(int i=1;i<n1+1;i++){
            dp[i][0]=i;
        }
        for(int i=1;i<n2+1;i++){
            dp[0][i]=i;
        }

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(w1[i]==w2[j])
                    dp[i+1][j+1]=dp[i][j];
                else
                    dp[i+1][j+1]=1+min( dp[i][j],min(dp[i+1][j] ,dp[i][j+1] )  );
            }
        }
        return dp[n1][n2];
    }
};
#include <algorithm>
class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int n=coins.size(),m=coins[0].size();
        int Neg=-1e9;
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(3,Neg) ));
        dp[0][0][0]=coins[0][0];
        if(coins[0][0]){
            dp[0][0][1]=0;
        }
        for(int i=1;i<n;i++){
            int c=coins[i][0];
            for(int k=0;k<3;k++){
                if(c<0 & k>0){
                    dp[i][0][k]=max(dp[i-1][0][k]+c,dp[i-1][0][k-1] );                    
                }
                else{
                    
                    dp[i][0][k]=dp[i-1][0][k]+c;
                }

            }
        }
        for(int j=1;j<m;j++){
            int c=coins[0][j];
            for(int k=0;k<3;k++){
                
                if(c<0 && k>0){
                    dp[0][j][k]=max(dp[0][j-1][k]+c,dp[0][j-1][k-1]);
                }
                else{
                    
                    dp[0][j][k]=dp[0][j-1][k]+c;
                }
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0)continue;
                int c=coins[i][j];
                for(int k=0;k<3;k++){
                    if(c<0 && k>0){
                        
                        
                        dp[i][j][k]=max({dp[i-1][j][k]+c,dp[i][j-1][k]+c,dp[i-1][j][k-1],dp[i][j-1][k-1]   });
                    }
                    else{
                        
                        dp[i][j][k]=max(dp[i][j-1][k],dp[i-1][j][k])+c;
                    }
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<"i="<<i<<" j="<<j<<endl;
        //         for(int k=0;k<3;k++){
        //             cout<<dp[i][j][k]<<" ";
        //         }
        //         cout<<endl;
        //     }
        // }
        return max({dp[n-1][m-1][0] ,dp[n-1][m-1][1],dp[n-1][m-1][2]});
    }
};
class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n=points.size(),m=points[0].size();
        vector<long long> dp(m,INT_MIN);
        for(int i=0;i<m;i++){
            dp[i]=points[0][i];
        }
        for(int i=1;i<n;i++){
            vector<long long> leftmax(m,INT_MIN);
            vector<long long> rightmax(m,INT_MIN);
            leftmax[0]=dp[0];
            rightmax[m-1]=dp[m-1];
            for(int j=1;j<m;j++)
                leftmax[j]=max(leftmax[j-1]-1,dp[j]);

            for(int j=m-2;j>=0;j--)
                rightmax[j]=max(rightmax[j+1]-1,dp[j]);
            // for(int j=0;j<m;j++){
            //     cout<<leftmax[j]<< " ";
            // }
            // cout<<endl;
            // for(int j=0;j<m;j++){
            //     cout<<rightmax[j]<< " ";
            // }
            // cout<<endl;


            for(int j=0;j<m;j++){
                dp[j]=max(leftmax[j],rightmax[j])+points[i][j];
                // cout<<dp[j]<<" ";
            }
            // cout<<endl;
        }
    long long maxi=INT_MIN;

    for(int i=0;i<m;i++){
        maxi=max(dp[i],maxi);
    }

    return maxi;
    }
};
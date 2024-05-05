class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int t;
        
        for(int i=0;i<n/2; i++){
            for(int j=i;j<n-1-i;j++){
                t=matrix[n-1-j][i];
                matrix[n-1-j][i]=matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j]=matrix[j][n-1-i];
                matrix[j][n-1-i]=matrix[i][j];
                matrix[i][j]=t;
                // for(int a =0;a<n;a++){
                //     for(int b=0;b<n;b++){
                //         cout<< matrix[a][b]<<" ";
                //     }
                //     cout<<endl;
                // }
                // t = matrix[i][j];
                // matrix[i][j] = matrix[n-j-1][i];
                // matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                // matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                // matrix[j][n-i-1] = t;
            }
        }
    }
};
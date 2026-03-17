class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]){
                    matrix[i][j]=matrix[i-1][j]+1;
                }
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            sort(matrix[i].begin(),matrix[i].end(),greater<int>());
            for(int j=0;j<m;j++){
                maxi=max(maxi,(matrix[i][j]*(j+1)));
                // cout<<i<<" "<<j<<" "<<matrix[i][j]<<endl;
            }
        }
        return maxi;
    }
};
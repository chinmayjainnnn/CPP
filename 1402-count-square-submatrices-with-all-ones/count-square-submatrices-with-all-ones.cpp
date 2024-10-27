class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> prefix(n+1,vector<int>(m+1,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                prefix[i+1][j+1]= matrix[i][j] - prefix[i][j]+prefix[i+1][j]+prefix[i][j+1] ;

            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int size=1; (i+size)<=n && (j+size)<=m ;size++){
                    if(size*size == prefix[i+size][j+size] +prefix[i][j]- prefix[i+size][j] -prefix[i][j+size]){
                        ans+=1;
                    }
                }
            }
        }

        return ans;
    }
};
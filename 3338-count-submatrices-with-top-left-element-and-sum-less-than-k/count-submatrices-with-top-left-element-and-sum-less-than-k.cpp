class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (i!=0 && j!=0){
                    grid[i][j]=grid[i][j]+grid[i-1][j]+grid[i][j-1]-grid[i-1][j-1];
                }
                else if(i==0 && j!=0){
                    grid[i][j]+=grid[i][j-1];
                }
                else if(i!=0 && j==0){
                    grid[i][j]+=grid[i-1][j];
                }
                
                
                if(grid[i][j]<=k)count++;
                // cout<<grid[i][j]<<endl;
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int j=y;j<y+k;j++){
            for(int i=0;i<k/2;i++){
                swap(grid[i+x][j],grid[x+k-i-1][j]);
            }
        }
        return grid;
    }
};
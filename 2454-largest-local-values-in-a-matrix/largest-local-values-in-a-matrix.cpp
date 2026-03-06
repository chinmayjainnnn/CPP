class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=n-2;
        vector<vector<int>> ans(m,vector<int>(m));
        for(int i=0;i<m;i++){
            vector<int> temp;
            for(int j=0;j<m;j++){
                int maxi=0;
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        maxi=max(maxi,grid[i+x][j+y]);
                    }
                }
                ans[i][j]=maxi;
            }
        }
        return ans;
    }
};
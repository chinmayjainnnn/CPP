class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int hmin=n-1,hmax=0,vmin=m-1,vmax=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    vmin=min(vmin,j);
                    vmax=max(vmax,j);
                    hmin=min(hmin,i);
                    hmax=max(hmax,i);
                }

            }
        }
        // cout<<vmin<<" "<<vmax<<" "<<hmin<<" "<<hmax<<endl;
        return (vmax-vmin+1)*(hmax-hmin+1);
    }
};
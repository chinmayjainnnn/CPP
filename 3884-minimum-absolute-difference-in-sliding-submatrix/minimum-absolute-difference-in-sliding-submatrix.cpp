class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        int row=n-k+1,col=m-k+1;
        vector<vector<int>> ans(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                vector<int> temp;
                
                for(int p=i;p<i+k;p++ ){
                    for(int q=j;q<j+k;q++){
                        temp.push_back(grid[p][q]);
                    }
                }
                
                
                sort(temp.begin(),temp.end());
                int mini=INT_MAX;
                for(int p=0;p<(k*k)-1;p++){
                    if(temp[p]==temp[p+1]){
                        continue;
                    }
                    mini=min(mini,temp[p+1]-temp[p]);
                }
                if(mini!=INT_MAX){
                    ans[i][j]=mini;
                }
                }
            }
        
        return ans;
    }
};
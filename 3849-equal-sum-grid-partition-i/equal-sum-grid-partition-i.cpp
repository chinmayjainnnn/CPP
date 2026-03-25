class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<long> row(n,0);
        vector<long> col(m,0);

        for(int i=0;i<n;i++){
            long sum=0;
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
            row[i]=sum;
        }
        long tot=0;
        for(int j=0;j<m;j++){
            long sum=0;
            for(int i=0;i<n;i++){
                sum+=grid[i][j];
            }
            col[j]=sum;
            tot+=sum;
        }
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=row[i];
            if(2*sum==tot)return true;
        }
        sum=0;
        for(int i=0;i<m;i++){
            sum+=col[i];
            if(2*sum==tot)return true;
        }
        return false;
    }
};
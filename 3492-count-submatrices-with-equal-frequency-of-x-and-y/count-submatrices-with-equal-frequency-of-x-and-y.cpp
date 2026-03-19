class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>x(n,vector<int>(m,0));
        vector<vector<int>>y(n,vector<int>(m,0));
        int count=0;
        if(grid[0][0]=='X')x[0][0]=1;
        if(grid[0][0]=='Y')y[0][0]=1;
                
        for(int i=1;i<n;i++){
            
            if(grid[i][0]=='X'){
                
                x[i][0]=x[i-1][0]+1;
                y[i][0]=y[i-1][0];
            }
            else if(grid[i][0]=='Y'){
                
                x[i][0]=x[i-1][0];
                y[i][0]=y[i-1][0]+1;
            }
            else{

                y[i][0]=y[i-1][0];
                x[i][0]=x[i-1][0];

            }
            if(x[i][0]>0 && x[i][0]==y[i][0])count++;
            
        }
       
        for(int j=1;j<m;j++){
            if(grid[0][j]=='X'){
                
                x[0][j]=x[0][j-1]+1;
                y[0][j]=y[0][j-1];
            }
            else if(grid[0][j]=='Y'){
                
                x[0][j]=x[0][j-1];
                y[0][j]=y[0][j-1]+1;
            }
            else{
                x[0][j]=x[0][j-1];
                y[0][j]=y[0][j-1];
            }
            if(x[0][j]>0 && x[0][j]==y[0][j])count++;
        }
        

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(grid[i][j]=='X'){
                    x[i][j]=x[i-1][j]+x[i][j-1]-x[i-1][j-1]+1;
                    y[i][j]=y[i-1][j]+y[i][j-1]-y[i-1][j-1];                    
                }
                else if(grid[i][j]=='Y'){
                    x[i][j]=x[i-1][j]+x[i][j-1]-x[i-1][j-1];
                    y[i][j]=y[i-1][j]+y[i][j-1]-y[i-1][j-1]+1;
                }
                else{
                    x[i][j]=x[i-1][j]+x[i][j-1]-x[i-1][j-1];
                    y[i][j]=y[i-1][j]+y[i][j-1]-y[i-1][j-1];
                }
                if(x[i][j]>0 && x[i][j]==y[i][j])count++;
              

            }
        }
        return count;
    }
};
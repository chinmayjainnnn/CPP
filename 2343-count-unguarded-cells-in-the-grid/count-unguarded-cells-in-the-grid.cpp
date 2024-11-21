class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> arr(m,vector<int>(n,1));
        
        for(int i=0;i<walls.size();i++){
            arr[walls[i][0]][walls[i][1]]=2;
            // arr[guards[i][0]][guards[i][1]]=2;
            
        }
        for(int i=0;i<guards.size();i++){
            // arr[walls[i][0]][walls[i][1]]=2;
            arr[guards[i][0]][guards[i][1]]=2;
            
        }
        for(int i=0;i<guards.size();i++){
            int x=guards[i][0],y=guards[i][1];
            arr[x][y]=0;
            for(int j=x-1;j>=0;j--){
                if(arr[j][y]==2)break;
                arr[j][y]=0;
            }
            for(int j=x+1;j<m;j++){
                if(arr[j][y]==2)break;
                arr[j][y]=0;
                
            }
            for(int j=y-1;j>=0;j--){
                
                if(arr[x][j]==2)break;
                arr[x][j]=0;
            }
            for(int j=y+1;j<n;j++){
                if(arr[x][j]==2)break;
                arr[x][j]=0;
                
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1)count++;
            }
        }
        
        return count;
    }
};
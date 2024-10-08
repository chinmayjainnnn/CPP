class Solution {
public:
    
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>> que;
        
        int n=board.size(),m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                que.push({i,0});
                visited[i][0]=1;
            } 
            if(board[i][m-1]=='O') {
                que.push({i,m-1});
                visited[i][m-1]=1;
            }
        }    
        for(int i=1;i<m-1;i++){
            if(board[0][i]=='O') {
                que.push({0,i});
                visited[0][i]=1;
            }
            if(board[n-1][i]=='O') {
                que.push({n-1,i});
                visited[n-1][i]=1;
            }
        }

        while(!que.empty()){
            
            int x=que.front().first,y=que.front().second;
            // cout<<x<<" " <<y<<endl;
            vector<int> helper={-1,0,1,0,-1};
            for(int i=0;i<4;i++){
                int newx=x+helper[i];
                int newy=y+helper[i+1];
                if(newx<n && newx>=0 && newy>=0 && newy <m && board[newx][newy]=='O' && visited[newx][newy]==0 ){
                    visited[newx][newy]=1;
                    que.push({newx,newy});
                }
            }
            que.pop();
        }
        for(int i=0;i<n;i++ ){
            for(int j=0;j<m;j++){
                // cout<<visited[i][j]<<" ";
                if(board[i][j]=='O' && visited[i][j]==0){
                    board[i][j]='X';
                }
            }
            cout<<endl;
        }
    }
};
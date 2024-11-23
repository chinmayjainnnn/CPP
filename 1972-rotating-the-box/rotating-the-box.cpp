class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n=box.size(),m=box[0].size();
        vector<vector<char>> rot(m,vector<char>(n));

        for(int i=0;i<n;i++){
            int obstacle=m,fill=m-1;
            for(int j=m-1;j>=0;j--){
                if(box[i][j]=='*'){
                    int temp=fill;
                    obstacle=j;
                    fill=j-1;
                    while(obstacle<temp){
                        rot[temp--][n-1-i]='.';
                    }

                    rot[j][n-1-i]='*';
                }
                else if(box[i][j]=='#'){
                    rot[fill--][n-1-i]='#';
                }                
            }
            while(fill>=0){
                rot[fill--][n-1-i]='.';
            }
        }
        return rot;
    }
};
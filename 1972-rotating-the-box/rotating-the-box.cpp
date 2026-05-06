class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& b) {
        int n=b.size(),m=b[0].size();
        int ind;
        vector<vector<char>> ans(m,vector<char>(n,'.'));
        for(int i=0;i<n;i++){
            ind=m-1;
            for(int j=m-1;j>=0;j--){
                if(b[i][j]=='#'){
                    ans[ind--][n-1-i]='#';
                }
                else if(b[i][j]=='*'){
                    
                    ans[j][n-1-i]='*';
                    ind=j-1;
                }
                
                
            }
        }
        return ans;
    }
};
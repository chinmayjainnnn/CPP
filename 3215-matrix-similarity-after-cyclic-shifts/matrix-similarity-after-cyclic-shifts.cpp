class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        int n=mat.size(),m=mat[0].size();
        if(k%m==0)return 1;
        vector<vector<int>> ans(n,vector<int>(m));
        k=k%m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int y;
                if(i%2){
                    y=(j+k)%m;
                    if(mat[i][y]!=mat[i][j])return false;
                }
                else{
                    y=(j-k+m)%m;
                    if(mat[i][y]!=mat[i][j])return false;
                }
            }
        }
        return true;

    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,bool>  row;
        unordered_map<int,bool> column;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    column[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] || column[j]){
                    matrix[i][j]=0;
                }
            }
        }
        return;
    }
};
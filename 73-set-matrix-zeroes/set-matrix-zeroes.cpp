class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<int> row(m,1);
        vector<int> column(n,1);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=0;
                    column[j]=0;
                }
            }
        }
        int temp;
        for(int i=0;i<m;i++){
            temp=row[i];
            for(int j=0;j<n;j++){
                matrix[i][j]=matrix[i][j]*temp*column[j];
        
            }
        }


        // for(int i=0;i<m;i++){
        //     cout<<row[i]<< " ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<column[i]<< " ";
        // }
    }
};
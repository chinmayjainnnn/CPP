class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> ans;
        int total=n*m,count=0;
        for(int k=0;k<=min(n,m)/2;k++){
            for(int i=k,j=k;j<m-k;j++){
                cout<<"1= "<<matrix[i][j]<<" ";
                count++;
                ans.push_back(matrix[i][j]);
            
            }
            if(count>=total)break;
            for(int i=k+1,j=m-1-k;i<n-k;i++){
                cout<<"2= "<<matrix[i][j]<<" ";
                count++;
                ans.push_back(matrix[i][j]);
            }
            if(count>=total)break;
            for(int i=n-1-k, j=m-1-k-1;j>=k;j--){
                cout<<"3= "<<matrix[i][j]<<" ";
                count++;
                ans.push_back(matrix[i][j]);
            }
            if(count>=total)break;
            for(int i=n-1-k-1,j=k;i>k;i--){
                cout<<"4= "<<matrix[i][j]<<" ";
                count++;
                ans.push_back(matrix[i][j]);
            }
            // if(count>=total)break;
        }
        return ans;
    }
};
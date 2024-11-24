class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),count=0;
        long long ans=0;
        int arr=INT_MAX;
        
        for(int i=0;i<n;i++){    
            int mini=INT_MAX;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<0){
                    count++;
                    ans-=matrix[i][j];
                }
                else{
                    ans+=matrix[i][j];
                }
                if(abs(matrix[i][j])<mini)mini=abs(matrix[i][j]);
            }
            arr=min(arr,mini);
        }
        if(count%2==1)ans=ans-2*arr;


    return ans;
    }
};
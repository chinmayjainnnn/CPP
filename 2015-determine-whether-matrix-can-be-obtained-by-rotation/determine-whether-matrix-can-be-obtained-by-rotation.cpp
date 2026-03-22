class Solution {
public:
    vector<vector<int>>&  rotate(vector<vector<int>>& arr) {
        int n=arr.size();
        for(int k=0;k<n/2;k++){
            for(int i=k;i<n-k-1;i++){
                int temp=arr[k][i];
                arr[k][i]=arr[n-i-1][k];
                arr[n-i-1][k]=arr[n-k-1][n-1-i];
                arr[n-k-1][n-1-i]=arr[i][n-k-1];
                arr[i][n-k-1]=temp;                
            }
        } 
        return arr;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(mat==target)return true;
            mat=rotate(mat);

        }
        return false;
    }
};
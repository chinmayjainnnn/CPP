class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
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
       
    }
};


// for(int k=0;k<n/2;k++){
//             for(int i=k;i<n-k-1;i++){
//                 int temp=arr[k][i];
//                 arr[k][i]=arr[n-1-i][k];
//                 arr[n-1-i][k]=arr[n-k-1][n-i-1];
//                 arr[n-k-1][n-i-1]=arr[i][n-k-1];
//                 arr[i][n-k-1]=temp;
                
        //     }
        // }
class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n=arr.size();
        
        for(int d=0;d<n/2;d++){
            for(int e=d;e<n-d-1;e++){
                int temp=arr[d][e];
                arr[d][e]=arr[n-1-e][d];
                arr[n-1-e][d]=arr[n-d-1][n-e-1];
                arr[n-d-1][n-e-1]=arr[e][n-d-1];
                arr[e][n-d-1]=temp;
                
            }
        }
    }
};
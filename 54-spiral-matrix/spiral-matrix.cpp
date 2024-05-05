class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=0,k=0;
        // cout<<m<<" "<<n;
        for(k=0;k<min(n/2,m/2);k++){
            
            while( j< (n-k) ){arr.push_back(matrix[i][j]);j++;}
            j--;
            i++;
            while( i< m-k ){ arr.push_back(matrix[i][j]);i++; }
            i--;
            j--;
            while( j >=k  ){arr.push_back(matrix[i][j]);j--;}
            j++;
            i--;
            while( i>k ){ arr.push_back(matrix[i][j]); i--;}
            i++;
            j++;

        }
        cout<< i<<" "<<j<<" "<<k<<endl;
        
       
        if((2*k!=n) && m>n ){
            while(i<m-k){
                arr.push_back(matrix[i][j]);
                i++;
            }
        }
        else if(2*k!=m && n>m){
            while(j<n-k){
                arr.push_back(matrix[i][j]);
                j++;
            }
        }
        else if( n%2==1 && n==m){
            arr.push_back(matrix[i][j]);
        }
        
    return arr;
    }
};
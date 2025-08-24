class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int s=0,e=n*m-1,mid;

        while(s<=e){
            mid=s+(e-s)/2;
            int i=mid/m,j=mid%m;
            if(target==matrix[i][j]){
                return true;
            }
            else if(target<matrix[i][j]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            // cout<<s<<" "<<mid<<" "<<e<<endl;

        }
        return false;
    }
};
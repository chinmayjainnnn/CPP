class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=m-1;
        while(i<n && j>=0 ){
            int num=matrix[i][j];
            
            if(num==target)return true;
            if(num<target)i++;
            else j--;
        }
        matrix.clear();
        return false;
    }
};
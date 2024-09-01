class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int start=0,end=m-1,mid,row,temp=0;

        while(start<=end){
            mid=start+(end-start)/2;
            if(matrix[mid][0]==target)return true;
            if(matrix[mid][0] <=target && matrix[mid][n-1]>=target){
                temp=1;
                row =mid;
                break;
            }    
            else if(matrix[mid][0] <=target)start=mid+1;
            else end=mid-1;
            
        } 
        if(!temp)return 0;
        
        start=0;
        end=n-1;
        // cout<<row<<endl;
        while(start<=end ){
            // cout<<start<<" "<<mid<<" "<<end<<endl;
            mid=start+(end-start)/2;
            if(matrix[row][mid]==target)return true;
            else if(matrix[row][mid]<target)start=mid+1;
            else end=mid-1;
        }


        return 0;
        }
};
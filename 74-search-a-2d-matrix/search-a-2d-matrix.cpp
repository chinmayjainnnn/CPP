class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix.size();
    int m=matrix[0].size();

    // cout<<n<<" "<<m;
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while(mid>-1 && mid<n && start<=end){
        mid=start+(end-start)/2;

        if(mid>-1 && mid<n && matrix[mid][0] == target)return true;
        else if(mid>-1 && mid<n && matrix[mid][0] <target  ){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<start<<" "<< mid<< " "<<end;
    int temp=end;
    start=0;
    end=m-1;
    mid=start+(end-start)/2;
    if(temp<0 || temp >n-1)return false;
    while(mid>-1 && mid<m && start<=end){
        mid=start+(end-start)/2;
        if(mid>-1 && mid<m && matrix[temp][mid] == target)return true;
        else if(mid>-1 && mid<m && matrix[temp][mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    return 0;
    }
};
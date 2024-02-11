class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        int mid=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if( (mid>0) && (arr[mid]>arr[mid-1] ) && (mid<n-1) && (arr[mid]>arr[mid+1] )){
                return mid;
            }
            else if(  (mid>0) && (arr[mid]>arr[mid-1] )   ){
                start=mid+1;
            }
            else if( (mid<n-1) && (arr[mid]>arr[mid+1] ) ){
                end=end-1;
            }
            else cout<<"wtf"<<endl;
        }

    return mid;    
    }
};
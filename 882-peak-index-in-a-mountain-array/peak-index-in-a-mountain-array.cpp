class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0,e=n-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            // cout<<s<<" "<<mid<<" "<<e<<endl;
            if(mid>0 && mid<n && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                
                return mid;
            }
            else if(mid<n && arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    return -1;}
};
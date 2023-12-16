class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e,mid,ans;
        e=arr.size()-1;
        return maxarr(arr,s,e);        
    }
    int maxarr(vector<int>& arr,int s,int e)
    {
        int mid=(s+(e-s)/2);
            if(arr[mid]>arr[mid-1])
            {
                if(arr[mid]>arr[mid+1]){return mid;}
                return maxarr(arr,mid,e);
            }
            else 
            {
                return maxarr(arr,s,mid);
            }
     }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        
        int n=arr.size();
        if(n==0)return {-1,-1};
        vector<int> ans;
        int f=-1,b=-1;
        int start=0,end=n-1,mid;
        if(arr[0]==k){
            start=n;
            f=0;
        }
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid>0 && arr[mid]==k && arr[mid-1]!=k ){
                f=mid;
                break;
            }
            else if(arr[mid]<k ){
                start=mid+1;
            }
            else if(arr[mid]>k || (mid>0 && arr[mid]==k && arr[mid-1]==k)){
                end=mid-1;
            }
        }
        start=0;
        end=n-1;
        if(arr[n-1]==k){
            start=n;
            b=n-1;
        }
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid<n-1 && arr[mid]==k && arr[mid+1]!=k){
                b=mid;
                break;
            }
            else if(arr[mid]<k || (mid<n-1 && arr[mid+1]==k && arr[mid]==k)){
                start=mid+1;
            }
            else if(arr[mid]>k){
                end=mid-1;
            }
        }




    ans.push_back(f);
    ans.push_back(b);
    return ans;
    }

};
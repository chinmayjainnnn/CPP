class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<n-1 && arr[l]<=arr[l+1]  )l++;
        while(r>0 && arr[r-1]<=arr[r])r--;
        if(l>=r)return 0;
        

        int result =min(r,n-1-l);
        l=0;
        r=n-1;
        
        
        while(l<r){
            
            cout<<l<<" "<<r<<" "<<result<<endl;

            while(l+1<r && r<n && arr[r-1]<=arr[r] && arr[l]<=arr[r])r--;
            while(r<n && arr[l]>arr[r])r++;
            
            result=min(result,r-l-1);

            if(arr[l]>arr[l+1])break;
            l++;
        }
       

        return result;
    }
};
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0,end=n-1,mid;
        if(k<arr[0]){return k;}

        if(arr[n-1]-n<k){return n +k;}

        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]-mid-1==k-1){
                while( mid!=n-1 && arr[mid]+1==arr[mid+1] )mid++;
                return arr[mid]+1;
            }
            else if(arr[mid]-mid-1<k){
                start=mid+1;
            }
            else{end=mid-1;}
            
        }
    return k+end+1;}
};
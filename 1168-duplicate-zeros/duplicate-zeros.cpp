class Solution {
public:void duplicateZeros(vector<int>& arr) {
    int n,j=0;
    n= arr.size();
    int arr2[n];
    for(int i=0;i<n;i++,j++)
    {

        arr2[i]=arr[j];
        if(arr[j]==0&&(i<n-1))
        {
            i++;
            arr2[i]=arr[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr2[i];
    }
}
};
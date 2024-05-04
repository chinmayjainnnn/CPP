class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int max=arr[n-1];
        int temp;
        arr[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            temp=arr[i];
            arr[i]=max;
            if(temp>max){
                max =temp;
            }
        }
    return arr;
    }
};
class Solution {
public:
    void sortColors(vector<int>& arr) {
    int n=arr.size();
    int left=0,right=n-1,mid=0;
    while(mid<right){
      if(arr[left]==2){
         swap(arr[left],arr[right]);
         right--;
      }
      else if(arr[right]==0){
         swap(arr[left],arr[right]);
         left++;
         if(mid<left)mid=left;
      }
      else if(arr[mid]==0){
         swap(arr[left],arr[mid]);
         left++;
         if(mid<left)mid=left;
      }
      else if(arr[mid]==2){
         swap(arr[right],arr[mid]);
         right--;
      }
      else if(arr[mid]==1)mid++;
   }
}
};
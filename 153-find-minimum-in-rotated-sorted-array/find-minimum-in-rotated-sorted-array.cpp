class Solution {
public:
    int findMin(vector<int>& nums) {
    
    int n=nums.size();
    int start=0,end=n-1;
    int mid,temp=-1;


    while(start<=end){
        mid =start+(end-start)/2;
        if((nums[mid]<=nums[n-1]) && ( mid>0 && (nums[mid-1]>nums[mid]) )  ){return nums[mid];}
        else if(nums[mid]<nums[n-1]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    if(mid == 0){return nums[0];}
    return -2;
    }
};
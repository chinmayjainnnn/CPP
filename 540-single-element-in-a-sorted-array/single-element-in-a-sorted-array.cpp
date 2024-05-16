class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(   mid >0 &&   mid<n-1 && nums[mid]!=nums[mid-1]    && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            else if( mid >0 && ((mid%2==0 && nums[mid] == nums[mid-1] ) || (mid%2 ==1  && nums[mid] != nums[mid-1] ))  ){
                end=mid-1;
            }
            else{
                start =mid+1;
            }
            
        }
    return nums[start-1];}
};
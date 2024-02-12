class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int mid;

        while(start<=end){
            mid=start+(end-start)/2;

            if(target==nums[mid]){return mid;}
            else if( nums[start]<=nums[mid]  ){
                if( target <nums[mid] && target >=nums[start] )end=mid-1;
                else start=mid+1;
            }
            else {
                if( target<=nums[end] && target >nums[mid] ){start=mid+1;}
                else end=mid-1;
            }
        }
        return -1;

        
    }
};
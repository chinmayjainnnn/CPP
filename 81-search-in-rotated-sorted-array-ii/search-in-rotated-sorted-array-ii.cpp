class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1,mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(target==nums[mid] || target==nums[start] || target == nums[end]){return 1;}
            else if(nums[mid]<=target  ){
                if(target>nums[0]  && nums[mid]<nums[n-1]){
                    end=mid-1;
                }
                else if(nums[0]==nums[mid] && nums[mid]==nums[n-1]){start=start+1;}
                else{start=mid+1;}
            }
            else{
                if(target<nums[n-1] && nums[mid] >nums[0] ){
                    start=mid+1;
                }
                else if(nums[0]==nums[mid] && nums[mid]==nums[n-1]){end=end-1;}
                else if(target<nums[n-1] && nums[mid] >=nums[0] ){start=mid+1;}
                else{end=mid-1;}

            }

        }

    return 0;}
};
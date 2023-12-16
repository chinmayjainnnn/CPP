class Solution {
public:
    int search(vector<int>& nums, int target) {
         int s=0,n=nums.size(),e,mid;
         e=n-1;
        
        if(nums[0]<nums[n-1]){}
        else
        {
            while(s<e)
            {
                mid=s+(e-s)/2;
                if(nums[mid] >= nums[0] ){s=mid+1;}
                else {e=mid;}
            }
            if((s>0) &&(nums[0]<=target)&&(target<=nums[s-1])   ){e=s-1;s=0;}
            else if ((nums[s]<=target)&&(target<=nums[n-1])){e=n-1;}
            else {return -1;}
        }
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target){return mid;}
            else if(nums[mid]>target){e=mid-1;}
            else{s=mid+1;}
        }
    return -1;}
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1,mid;
        if(nums[s]==target)return s;
        if(nums[e]==target)return e;
        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]==target ){
                return mid;
            }
            else if(nums[mid] >nums[0] && nums[mid] >target && target > nums[0])e=mid;
            else if(nums[mid] >nums[0] ) s=mid+1;
            else if(nums[mid] <nums[0] && target>nums[mid] && target <nums[0])s=mid+1;
            else e=mid;
            cout<<s<<" "<<mid<<" "<<e<<endl;
        }
        return -1;
    }
};
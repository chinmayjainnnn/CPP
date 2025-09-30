class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return {-1,-1};
        int first=-1,end=-1;
        int s=0,e=n-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid<n-1 && nums[mid]!=target && nums[mid+1]==target){
                first=mid+1;
                break;
            }
            else if(nums[mid]<target ) s=mid+1;
            else e=mid-1;
        }
        if(nums[0]==target)first=0;
        s=0;
        e=n-1;
        while(s<=e){
            mid=s+(e-s)/2;
            // cout<<mid<<endl;
            if(mid<n-1  && nums[mid]==target && nums[mid+1]!=target){
                end=mid;
                cout<<end<<endl;
                break;
            }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }

        if(nums[n-1]==target)end=n-1;
        return {first,end};
        
    }
};
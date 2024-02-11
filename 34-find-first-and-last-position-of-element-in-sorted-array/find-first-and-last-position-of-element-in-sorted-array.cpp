class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int start=0,end=n-1,mid;
        int temp=-1;
        vector <int> ans;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
                if(target==nums[mid]){
                    temp=mid;
                }
            }
        }
        ans.push_back(temp);
        
        start=0;
        end=n-1;
        temp=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
                if(target==nums[mid]){
                    temp=mid;
                }
            }
        }
        ans.push_back(temp);
    return ans;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int start=0,end=n-1,mid;
        int temp=-1;
        vector <int> ans;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if((target == nums[mid]) && ((mid==0) || ( target!=nums[mid-1] ))){
                temp=mid;
                break;
            }
            else if(target > nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;   
            }
        }
        ans.push_back(temp);
        
        start=0;
        end=n-1;
        temp=-1;
       
        while(start<=end){
            mid=start+(end-start)/2;
            if((target == nums[mid]) && ((mid==n-1) || ( target!=nums[mid+1] ))){
                temp=mid;
                break;
            }
            else if(target >= nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;   
            }
            cout<< mid<<endl;
        }
        ans.push_back(temp);
        return ans;
    }
};
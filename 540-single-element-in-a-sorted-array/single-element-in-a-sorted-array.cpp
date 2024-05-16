class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            cout<<" "<<start<<" "<<mid<<" "<<end<<" ";
            if(   mid >0 &&   mid<n-1 && nums[mid]!=nums[mid-1]    && nums[mid] != nums[mid+1]){
                return nums[mid];
                cout<<"1"<<endl;
            }
            else if( mid >0 && ((mid%2==0 && nums[mid] == nums[mid-1] ) || (mid%2 ==1  && nums[mid] != nums[mid-1] ))  ){
                end=mid-1;
                cout<<"2"<<endl;
            }
            
            else{
                start =mid+1;
                cout<<"3"<<endl;
            }
            
        }
    return nums[start-1];}
};
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1,end=0,mid;
        int ans;
        for(int i=0;i<n;i++){
            if(end<nums[i])end=nums[i];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            int temp=0;
            for(int i=0;i<n;i++){
                temp+=nums[i]/mid;
                if((nums[i]%mid)!=0){temp+=1;}
            }
            
            
            if(temp>threshold){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
            
        }
    return ans;
    }
};
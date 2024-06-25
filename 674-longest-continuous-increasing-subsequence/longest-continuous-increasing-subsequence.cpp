class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1,mx=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                count++;
            }
            else{
                if(mx<count)mx=count;
                count=1;
            }   
        }
    return max(mx,count);
    }
};
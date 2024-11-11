class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int peak=n-1;

        while(peak>0 && nums[peak]<=nums[peak-1])peak--;
        if(peak==0){
            sort(nums.begin(),nums.end());
            return;
        }
        int i=n-1;
        while(i>peak && nums[peak-1]>=nums[i])i--;
        
        // cout<<peak<<" " <<i<<endl;
        swap(nums[peak-1],nums[i]);
        sort((nums.begin()+peak),nums.end());
        
    }
};
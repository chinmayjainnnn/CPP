class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j])
                nums[i++]=nums[j++];
            else{
                j++;
            }
        }
        while(i<nums.size()){
            nums[i++]=0;
        }
    }
};
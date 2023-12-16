class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k=0,temp,i=0;
    int n=nums.size();

    while(i<n)
    {
        temp=nums[i];
        while(i<n   &&    (nums[i]==temp)  ){i++;}
        nums[k++]=temp;
    }
    return k;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int n=nums.size(),i=0,j,k=0,l=0;
    j=n-1;
    while(i<=j)
    {
        while((i<=j ) && (nums[i]!=val) ){i++;k++;}
        while((i<=j) &&(nums[j]==val)){j--;}
        if(i<j){swap(nums[i],nums[j]);}
    }
    
    return k;
    }
};
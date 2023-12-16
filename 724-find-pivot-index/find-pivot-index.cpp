class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int i=0,r=0,l=0;
    for( i=1;i<nums.size();i++){r+=nums[i];}

    for( i=0;i<nums.size()-1;i++)
    {
        if(l==r){return i;}
        else{l+=nums[i];r-=nums[i+1];}
    }
    if(l==r){return i;}
    
    
 return -1;}
}; 
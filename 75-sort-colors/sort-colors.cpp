class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size(),a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0){nums[a]=0;a++;}
        else if(nums[i]==1){b++;}
        else{c++;}
    }
    while(b){nums[a+b-1]=1;b--;}
    while(c){nums[n-c]=2;c--;}

    }
};
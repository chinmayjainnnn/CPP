class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n=nums.size(),count=0,countmax=0;
    int i=0;
    while(i<n){
        while((i<n) && (nums[i]==1)){
            count++;
            i++;
        }
        if(count>countmax)countmax=count;
        count=0;
        i++;
    }
    return countmax;
    }
};
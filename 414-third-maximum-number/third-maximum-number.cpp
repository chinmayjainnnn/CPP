class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        long long first=LLONG_MIN,second=LLONG_MIN,third=LLONG_MIN;
        
        for(int i=0;i<n;i++){
            if(first==nums[i] || second == nums[i] || third==nums[i]){
                continue;
            }
            
            if(first<nums[i]){
                third=second;
                second=first;
                first=nums[i];
            }
            else if(second<nums[i]){
                third=second;
                second=nums[i];
            }
            else if(third<nums[i]){
                third=nums[i];
            }
        }    
        if(third==LLONG_MIN){
            return first;
        }
        return third;
    }
    
};
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size(),sum=0,minisum=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            minisum=min(sum,minisum);
        }
        if(minisum>0)return 1;
        else return abs(minisum-1);
        // return abs(min(1,minisum-1));
    }
};
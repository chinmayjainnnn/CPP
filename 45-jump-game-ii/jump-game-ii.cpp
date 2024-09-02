class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n,INT_MAX);
        vec[0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;(i+j)<n && j<=nums[i];j++){
                vec[i+j]=min(vec[i+j],vec[i]+1);
            }
        }

        return vec[n-1];

    }
};
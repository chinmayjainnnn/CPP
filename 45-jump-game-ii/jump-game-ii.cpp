class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        
        int jumps=0;
        int reach=0;
        int nextreach=nums[0]; 

        for(int i=0;i<n;i++){
            if(i<=reach){
                nextreach=max(nextreach,i+nums[i]);
            }
            if(i==reach){
                // cout<<"in_i="<<i<<endl;
                jumps++;
                if(nextreach>=n-1)return jumps;
                reach=nextreach;
                nextreach=0;

            }
            // cout<<"i="<<i<<" reach="<<reach<<" jumps="<<jumps<<endl;
            
        }
        return jumps;   
    }
};
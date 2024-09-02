class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        if(n<3)return n-1;

        vector<int> vec(n,INT_MAX);
        vec[0]=0;
        int maxi=nums[0],jmp=1,lim=nums[0];
        
        for(int i=1;i<n-1;i++){
            maxi=max(maxi,i+nums[i]);
            if(i==lim){
                lim=maxi;
                jmp++;
            }
            
            vec[i]=jmp;
        }
        if(maxi<n-1)return ++jmp;
        return jmp;
    }
};
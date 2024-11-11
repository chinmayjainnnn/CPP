class Solution {
public:
    bool is_prime(int z){
        if(z<2)return 0;
        if(z==2)return 1;
        if(z%2==0) return 0;
        int s=sqrt(z);
        
        for(int i=3;i<=s;i+=2){
            if(z%i==0)return 0;
        }
        return 1;
    }
    
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        int last =0;
        for(int i=0;i<n;i++){
            int j=nums[i]-last-1;
            for(;j>1;j--){
                if(is_prime(j)){
                    break;
                }
            }
            
            if(j>1)nums[i]-=j;
            last=nums[i];
            // cout<<last<<" "<<nums[i]<<endl;
        }
        for(int i=0;i<n-1;i++){
            // cout<<nums[i]<<endl;
            if(nums[i]>=nums[i+1])return 0;
        }
        return 1;
    }
};
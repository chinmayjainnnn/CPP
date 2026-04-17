class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n=n/10;
            
        }
        return rev;
    }     
    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size(),ans=n+1;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int x=nums[i];
            
            if(mp.find(x)!=mp.end())ans=min(ans,i-mp[x]);
            mp[reverse(x)]=i;
            
        }
        if(ans==n+1)return -1;
        return ans;
    }
};
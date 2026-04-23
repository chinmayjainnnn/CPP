class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans(n,0);
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &[key,vec]:mp){
            int k=vec.size();
            long long tot=0;
            for(auto i:vec)tot+=i;

            long long pre=0;
            for(int i=0;i<k;i++){
                long long left=(long long)i*vec[i]-pre;
                
                long long right=(tot-pre-vec[i])-(long long)(k-1-i)*vec[i];
                pre+=vec[i];
                ans[vec[i]]=left+right;
            }

        }
         return ans;   
        

    }
};
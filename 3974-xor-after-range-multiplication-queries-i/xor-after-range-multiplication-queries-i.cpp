class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int n=q.size();
        int mod=1e9+7;
        vector<long long> nums2(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int id=q[i][0];
            int ri=q[i][1];
            while(id<=ri){
                nums2[id]=(nums2[id]*q[i][3])%mod;
                id+=q[i][2];
            }

        }
        long long ans=nums2[0];
        for(int i=1;i<nums2.size();i++){
            ans=ans^nums2[i];
        }
return ans;
    }
};
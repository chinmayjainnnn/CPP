class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n-3;i++){
            if(i==0|| (i>0 && nums[i]!=nums[i-1] )){
                long long three=target-nums[i];
                for(int j=i+1;j<n-2;j++){
                    if(j==i+1|| nums[j]!=nums[j-1]){
                        int k=j+1,l=n-1;
                        long long two=three-nums[j];

                        while(k<l){
                            if((long long)(nums[k]+nums[l])==two){
                                ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                                k++;
                                l--;
                                while((k<l) && nums[k]==nums[k-1]) k++;
                                while((l>k) && nums[l]==nums[l+1]) l--;
                            }
                            else if(nums[k]+nums[l]>two){
                                l--;
                            }
                            else{
                                k++;
                            }

                        }
                    }   
                }
            }
        }
    return ans;}
};
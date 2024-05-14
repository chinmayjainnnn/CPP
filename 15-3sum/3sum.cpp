class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        // unordered_map

        for(int i=0;i<n-2;i++){
            if((i==0)||(i<n && nums[i]!=nums[i-1] ) ){
                int k=n-1,sum,j=i+1;

                while(j<k){
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum>0){
                        while(k>j && nums[k-1]==nums[k]){k--;}
                        k--;
                    }
                    else if(sum<0){
                        while(j<k && nums[j]==nums[j+1]){j++;}
                        j++;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k]});
                        while(k>j &&nums[k-1]==nums[k]){k--;}
                        k--;
                        while(j<k && nums[j]==nums[j+1]){j++;}
                        j++;
                    }
                }
            }
        }
    return ans;}
};
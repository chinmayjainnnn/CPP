class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if( n<3 | nums[0]>0)return {};
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i])continue;
            int a=nums[i];
            
            int left=i+1,right=n-1;
            while(left<right){
                // cout<< a<<" "<<nums[left]<<" "<<nums[right]<<endl;
                int sum=a+nums[left]+nums[right];
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    while(left<right &&nums[left]==nums[left+1]){
                        left++;
                    }
                    while(left<right &&nums[right]==nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                    
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return ans;
    }
};
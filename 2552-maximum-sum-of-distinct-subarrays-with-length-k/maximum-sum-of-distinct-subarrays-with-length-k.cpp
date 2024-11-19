class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long maxi=0,sum=0;
        
        map<int,int> mp;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]+=1;
        }
        if(mp.size()!=k)maxi=0;
        else maxi=sum;
        for(int i=k;i<n;i++){
            
            sum=sum+nums[i]-nums[i-k];
            mp[nums[i-k]]--;
            mp[nums[i]]++;
            if(mp[nums[i-k]]==0)
                mp.erase(nums[i-k]);
            if(mp.size()==k){
                maxi=max(maxi,sum);
            }
            // cout<<maxi<<" "<<sum<<endl;
            
        }
        return maxi;    
    }
};

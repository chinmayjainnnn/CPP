class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0)return false;
        map<int,int> mp;
        int min=0;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            while(mp[i.first]>0)
            {
                for(int j=i.first;j<k+i.first;j++){
                    if(mp[j]>0)
                        mp[j]=mp[j]-1;
                    else
                        return false;
                }
            }
        }
    return true;
    }
};
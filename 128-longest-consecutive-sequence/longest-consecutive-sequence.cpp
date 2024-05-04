class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return 1;
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int max=0,count=1,temp;
        temp=mp.begin()->first;
        for(auto i:mp){
            if((i.first-temp) ==1){
                count++;
            }
            else{
                if(max<count){
                    max=count;
                }
                count=1;
            }
            temp=i.first;
        }
        if(max<count){
            max=count;
        }
    return max;
    }
};
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> mp;
        while(n){
            
            mp[n%10]+=1;
            n=n/10;
        }
        int mini=INT_MAX,ans=INT_MAX;
        for(auto i:mp){
            
            if(i.second<mini){
                ans=i.first;
                mini=i.second;
            }
           
           

        }
        return ans;


    }
};
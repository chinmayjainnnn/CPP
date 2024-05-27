class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        if(n==1)return mp[s[0]];
        int ans=mp[s[n-1]];
        int i=n-2;
        while(i>-1){
            while(i>-1 && mp[s[i]]>=mp[s[i+1]]  ){
                ans+=mp[s[i]];
                i--;
            }
            while(i>-1 && mp[s[i]]<=mp[s[i+1]]){
                ans-=mp[s[i]];
                i--;
            }

        }
        

    return ans;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)mp[s[i]]++;
        s="";
        n=mp.size();
        while(n--){
            int max=0;
            char c;
            
            for(auto i:mp){
                if(i.second>max){
                    c=i.first;
                    max=i.second;
                }
            }
            s=s+string(max,c);
            mp[c]=0;
        }

    return s;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(int i=0;i<n;i++)mp[s[i]]++;
        for(int i=0;i<n;i++)mp2[t[i]]++;
    if(mp==mp2)return true;
    return false;}
};
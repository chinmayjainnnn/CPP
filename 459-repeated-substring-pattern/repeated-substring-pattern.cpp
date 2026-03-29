class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        string ans=s+s;
        ans[0]='#';
        ans[2*n-1]='#';
        if(ans.find(s)!=-1)return true;
        return 0;
    }
};
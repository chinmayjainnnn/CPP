class Solution {
public:
    bool check(string &haystack,string &needle, int x){
        int m=needle.size();
        for(int i=0;i<m;i++){
            if(haystack[i+x]!=needle[i])return 0;
        } 
        return 1;
    }
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        for(int i=0;i<n-m+1;i++){
            if(check(haystack,needle,i)) return i;
        }
        return -1;

    }
};
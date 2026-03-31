class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        int len=0;
        vector<int> p(n,0);
        for(int i=1;i<n;i++){
            if(s[i]==s[len]){
                len++;
            }
            else if(len>0){
                while(len>0 && s[i]!=s[len]){
                    len=p[len-1];
                }
                if(s[i]==s[len])len++;
            }
            p[i]=len;
            
        }
        return s.substr(0,len);
    }
};
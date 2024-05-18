class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),no=0;
        if(n==1){return strs[0];}
        string ans="";
        bool flag=1;
        char c;

        while(flag){
            c=strs[0][no];
            for(int i=1;i<n;i++){
                if(strs[i][no]=='\0' || strs[i][no]!=c){
                    return ans;
                }
            }
            ans=ans+c;
            no++;

        }
        
    return ans;}
};
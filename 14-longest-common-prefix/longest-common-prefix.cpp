class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size(),len=0;
        string ans="";
        
        
        while(str[0][len]!='\0'){
            char ch=str[0][len];
            for(int i=1;i<n;i++){
                
                if(str[i][len]=='\0' || ch !=str[i][len] ){
                    return ans;
                }
                
            }
            ans.push_back(str[0][len]);
            len++;
        }
        return ans;
    }
};
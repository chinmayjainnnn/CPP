class Solution {
public:
    string generateString(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        string ans(n+m-1,'#');
        for(int i=0;i<n;i++){
            if(str1[i]=='T' ){
                for(int j=0;j<m;j++){
                    char c=ans[i+j];
                    if(c!='#' &&c!=str2[j]){
                        return "";
                    }
                    ans[j+i]=str2[j];

                }
            }
        }

        string old_ans=ans;
        for(char &c:ans){
            if(c=='#')c='a';
        }
        for(int i=0;i<n;i++){
            if(str1[i]!='F'){
                continue;
            }
            if(string(ans.begin()+i,ans.begin()+i+m)!=str2)continue;
            bool flag=false;
            for(int j=i+m-1;j>=i;j--){
                if(old_ans[j]=='#'){
                    ans[j]='b';
                    flag=true;
                    break;
                }
            }
            if(!flag)return"";
        }
        return ans;
    }
};
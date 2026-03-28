class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        for(int i=0;i<n;i++){  
            if(haystack[i]==needle[0]){
                // cout<<i<<endl;
                for(int j=0;j<m;j++ ){
                    if(i+j>n-1 || haystack[i+j]!=needle[j] ){
                        // cout<<j<<endl;
                        break;
                    }
                    if(j==m-1)return i;
                            
                }
            }
        }
        return -1;
    }
};
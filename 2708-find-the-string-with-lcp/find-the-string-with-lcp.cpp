class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        int n=lcp.size();
        string ans(n,'a'-1);
        
        char last='a'-1;
        for(int i=0;i<n;i++){
            if(ans[i]>='a')continue;
            else{ 
                ans[i]=last+1;
                if(last=='z')return "";
                last++;
            } 
            for(int j=0;j<n;j++){
                if(lcp[i][j] ){
                   ans[j]=ans[i]; 
                }
                
            }
        }
        
        for(int i=0;i<n;i++){
            // cout<<"i= "<<i<<endl;
            // cout<<lcp[i][i]<<" "<<n-i<<endl;
            if( lcp[i][i]!=n-i   ){
                return "";
            }
            if(lcp[n-1][i]>1  || lcp[i][n-1]>1 )return"";
            for(int j=0;j<n;j++){
                int x=lcp[i][j],y=lcp[j][i];
                if(x!=y)return"";
                if(ans[i]==ans[j]){
                    if(!x)return"";
                }
                else if(x)return"";
                
                if( x!=0 && i+1<n && j+1<n && (x!=lcp[i+1][j+1]+1 || y!=lcp[i+1][j+1]+1))return"";
                // cout<<"j= "<<j<<endl;
            }
        }

        return ans;
    }
};
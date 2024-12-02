class Solution {
public:
    int isPrefixOfWord(string srr, string sw) {
        int n=srr.size(),m=sw.size();
        int ans=-1,i=0;
        while(i<n){
            int j=0;
            while(j<m && i<n && srr[i]==sw[j]){
                i++;
                j++;
            }
            cout<<i<<" "<<j<<" "<<ans<<endl;
            if(j==m)return ++++ans;
            while(i<n && srr[i++]!=' ');
            
            ans++;

        }
    return -1;}
};
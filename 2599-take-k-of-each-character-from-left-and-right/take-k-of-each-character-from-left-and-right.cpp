class Solution {
public:
    int takeCharacters(string s, int k) {
        if(k==0)return 0;
        int n=s.size();
        int mini=INT_MAX;
        int a=0,b=0,c=0;

        for(int i=n-1;i>=0 ;i--){
            if(s[i]=='a')a++;
            else if(s[i]=='b')b++;
            else c++;

            if(a>=k && b>=k && c>=k ){
                mini=n-i;
                break; 
            }
        }
        cout<<mini<<endl;
        if(mini==INT_MAX)return -1;
        int r=n-mini;
        for(int i=0;i<n;i++){
            if(s[i]=='a')a++;
            else if(s[i]=='b')b++;
            else c++;
            while(a>=k && b>=k && c>=k ){
                if(s[r]=='a' && a>k ){
                    a--;
                    r++;
                }
                else if(s[r]=='b' && b>k){
                    b--;
                    r++;
                }
                else if(s[r]=='c' && c>k){
                    c--;
                    r++;
                }
                else {
                    mini=min(mini,i+n-r+1);
                    break;
                }
            }
            
        }
        return mini;
    }
};

class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        s=s+s;
        string alt(2*n,'0');
        for(int i=0;i<2*n;i+=2){
            alt[i]='1';
        }     
        int count=0;   
        
        for(int i=0;i<n;i++){
            if(s[i]!=alt[i]){
                count++;
                
            }
        }
        
        int mini=min(count,n-count);
        for(int i=n;i<2*n;i++){
            if(s[i-n]!=alt[i-n]){
                count--;
            }
            if(s[i]!=alt[i]){
                count++;
            }
            
            mini=min(mini,min(count,n-count));
            
        }
        return mini;
    }
};
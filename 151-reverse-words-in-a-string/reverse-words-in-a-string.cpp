class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int start=n-1,end,temp;
        while(start>-1 && s[start]==' ')start--;
        while(start>-1){
            
            
           
            while( start>-1 && s[start]!=' ')start--;
            temp=start+1;
            while(temp<end+1){
                ans=ans+s[temp++];
            }
            while(start>-1 && s[start]==' ')start--;
            end=start;
            if(start>-1)ans=ans+' ';
            
           

        }
    return ans;
    }
};
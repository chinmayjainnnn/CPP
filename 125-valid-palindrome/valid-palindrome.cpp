class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string f;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]>='a'&& s[i]<='z'){
                f.push_back(s[i]);
            }
            else if(s[i]>='0'&& s[i]<='9'){
                f.push_back(s[i]);
            }
            else if(s[i]>='A'&& s[i]<='Z'){
                f.push_back(s[i]-'A'+'a');
            }
        }
    j=0;
    n=f.size();
    while( (n>=0) && j<n ){
       
        if(f[n-1]!=f[j++])return false;
        n--;
    }    
    return true;
    }
};
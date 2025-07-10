class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]==s[j]){i++;j--;continue;}
        else if(  isalpha(s[i]) &&   isalpha(s[j]) ){
            if(s[i]>='A' && s[i]<='Z')s[i]=s[i]-'A'+'a';
            if(s[j]>='A' && s[j]<='Z')s[j]=s[j]-'A'+'a';         
            if(s[i]==s[j]){i++;j--;continue;}
            else return false;
        } 
        else if(!( isdigit(s[j]) || isalpha(s[j]) ))j--;
        else if(!(isdigit(s[i]) || isalpha(s[i])))i++;
        else{
            return false;
        }
    }
    return true;
    }
};
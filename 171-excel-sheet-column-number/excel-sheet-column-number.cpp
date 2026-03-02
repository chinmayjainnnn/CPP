class Solution {
public:
    long titleToNumber(string s) {
        long pow=1;
        long ans=0;
        reverse(s.begin(),s.end());
        for(char c:s){
            ans=ans+(c-'@')*pow;
            pow=pow*26;

        }
        return ans;
    }
};
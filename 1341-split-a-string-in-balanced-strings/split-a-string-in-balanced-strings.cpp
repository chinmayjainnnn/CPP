class Solution {
public:
    int balancedStringSplit(string s) {
        int left=0,right=0,n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')left++;
            else right++;
            if(left==right){
                ans++;
                left=0;
                right=0;
            }
        }
    return ans;}
};
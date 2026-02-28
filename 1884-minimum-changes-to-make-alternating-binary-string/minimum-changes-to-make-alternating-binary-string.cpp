class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
           if(i%2 && s[i]=='1'){
                count++;
           }
           else if(i%2==0 && s[i]=='0'){
                count++;
           }
        }
        return min(count,n-count);
    }
};
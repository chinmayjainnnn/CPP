class Solution {
public:
    string rec(int n){
        if(n==1)return "0";
        string inv=rec(n-1);
        string s=inv;
        reverse(inv.begin(),inv.end());
        for(char &c:inv){
            if(c=='1'){
                c='0';
            }
            else{
                c='1';
            }
        }
        return s+'1'+inv;
    }
    char findKthBit(int n, int k) {
        string ans=rec(n);
        return ans[k-1];       
    }
};
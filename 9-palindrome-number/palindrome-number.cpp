class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int n=x;
        long sum=0;
        while(x){
            int mod=x%10;
            x=x/10;
            sum=sum*10+mod;
            // cout<<mod<<" "<<sum<<" "<<x<<endl;
        }
        if(sum==n)return true;
        return false;
    }
};
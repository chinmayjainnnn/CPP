class Solution {
public:
    int reverse(int x) {
        int rev=x,ans=0;
        while(rev!=0 ){
            if(ans>INT_MAX/10 || ans <INT_MIN/10)return 0;
            ans=ans*10+rev%10;
            rev=rev/10;
            
        }
        
        return ans;
    }
};
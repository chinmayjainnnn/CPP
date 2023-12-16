class Solution {
public:
    int trailingZeroes(int n) {
        
        if(n<5){return 0;}
        int x=1,ans=0;
        while(x<n)
        {
            x=x*5;
            ans=ans+(n/x);
        }
        return ans;
    }
};
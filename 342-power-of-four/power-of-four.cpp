class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n==0){return false;}
        while(n!=0)
        {
            if(( (n&11) !=0 )&&(n!=1)){return false;}
            n=n>>2;
        }
        return true; 
    }
};
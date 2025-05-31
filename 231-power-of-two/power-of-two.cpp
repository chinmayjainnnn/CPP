class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==INT_MIN)return 0;
        
        if(!(n & n-1 ))return 1;
        else return 0;
        
    }
};
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n==0 || n==INT_MIN)return 0;
        
        for(int i=0;i<31;i++){
            int ans =pow(2,i);
            if(n==ans){return 1;}
        }
        return 0;
    }
};
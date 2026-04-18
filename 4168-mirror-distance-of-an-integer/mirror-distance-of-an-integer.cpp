class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0,n2=n;
        while(n){
            rev=rev*10+n%10;
            n=n/10;
        }
        return abs(n2-rev);
    }
};
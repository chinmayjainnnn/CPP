class Solution {
public:
    int differenceOfSums(int n, int m) {
        int temp=(n*(n+1))/2;
        int pro=m*(n/m)*(n/m +1);
        return temp-pro;
    }
};
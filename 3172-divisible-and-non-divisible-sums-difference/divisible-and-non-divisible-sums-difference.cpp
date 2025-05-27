class Solution {
public:
    int differenceOfSums(int n, int m) {
        int temp=n/m;
        return (n*(n+1))/2-m*(temp*(temp +1));
    }
};
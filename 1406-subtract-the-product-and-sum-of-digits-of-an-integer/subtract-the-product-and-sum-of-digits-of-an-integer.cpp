class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n,prod=1,sum=0;
        while(n>0){
            sum+=n%10;
            prod=prod*(n%10);
            n=n/10;
        }
        return prod-sum;
    }
};
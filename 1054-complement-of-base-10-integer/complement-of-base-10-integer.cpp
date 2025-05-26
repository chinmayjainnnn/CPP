class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int temp=n,digit=0;
        while(n!=0){
            digit+=1;
            n=n/2;
        }

        return pow(2,digit)-1-temp;
    }
};
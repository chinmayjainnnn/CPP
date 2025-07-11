class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0;
        long int temp=x;
        long int rev=0;
        while(x){
            rev=rev*10+(x%10);
            x=x/10;
        }
        
        return rev==temp;
    }
};
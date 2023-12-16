class Solution {
public:
    bool isPalindrome(int x) {
        int  backup, rem;
        long int rev=0;
        if( x < 0 ){return false;}
        backup=x;
        while(x!=0)
        {
            rem=x%10;
            rev = ((rev*10)+rem);
            x=x/10;

        }

        if(  (rev==backup ) ){return true;}
        else{return false;}
    }
};
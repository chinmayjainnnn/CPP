class Solution {
public:
    int reverse(int x) {
       if((x>=INT_MAX || x<=INT_MIN)){return 0;}
        double rev=0,a;
        if(x>=0){a=1;}
        
        else{a=-1;x=(-x);}
        while(x!=0){
            rev=rev*10+(x%10);
            x=x/10;
            if((rev>=INT_MAX || rev<=INT_MIN)){return 0;}
        }
        return a*rev;
    }
    
};
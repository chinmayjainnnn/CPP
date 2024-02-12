class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        long int s=0,e=x;
        long int mid;
        while(s<e){
            mid=s+(e-s)/2;
            if(x<mid*mid){
                e=mid;
            }
            else{s=mid+1;}
        }
        return s-1;

    }
};
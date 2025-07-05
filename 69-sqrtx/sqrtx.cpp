class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        int s=0,e=x,ans;
        long long int mid;
        while(s<e){
            mid=s+(e-s)/2;
            long long int temp=mid*mid;
            if(temp==x)return mid;
            else if(temp<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid;
            }
        
        }
        return ans;
    }
};
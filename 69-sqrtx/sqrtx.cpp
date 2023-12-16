class Solution {
public:
    int mySqrt(int x) {
    int start=0,end=x;
        long long int mid,ans;
        long long int square;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            square = (mid*mid);
            if(square == x){return mid;}
            if(square < x){start=mid+1;ans=mid;}
            else{end=mid-1;}
        }
        
    return ans;    }
   

};
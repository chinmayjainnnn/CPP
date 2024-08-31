class Solution {
public:
    int rec(int n,vector<int> &arr){
        if(n<3)return n+1;
        if(arr[n]!=-1)return arr[n];
        return arr[n]=rec(n-1,arr)+rec(n-2,arr);
    }
    int climbStairs(int n) {
    
        vector<int> arr(n,-1);
        return rec(n-1,arr);
    }
};
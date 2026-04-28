class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n=grid.size();
        vector<int> arr;
        int rem=grid[0][0]%x;
        for(auto it:grid){
           for( int a:it){
                if(a%x!=rem)return -1;
                arr.push_back(a);
           }
        }
        n=arr.size();
        sort(arr.begin(),arr.end());
        int med=arr[n/2];
        
        int med2;
        if(n<2)med2=med;
        else med2=arr[n/2-1];
        int ans=0;
        int ans2=0;
        for(int i:arr){
            ans +=abs((i-med)/x);
            ans2 +=abs((i-med2)/x);
        }


        return min(ans,ans2);
    }
};
class Solution {
public:
         
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int arr[n];
        // arr[0]=0;
        for(int i=0;i<n-1;i++){
            arr[i]=prices[i+1]-prices[i];
        }
        int sum=0;
        int max=INT_MIN;
        for( int i=0;i<n-1;i++){
            sum+=arr[i];
            if(max<sum){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
    if(max<0){return 0;}
    return max;
    }
};
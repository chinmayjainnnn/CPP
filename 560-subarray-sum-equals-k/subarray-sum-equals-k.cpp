class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum[n+1];
        sum[0]=0;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+nums[i-1];
        }
        // for(int i=0;i<=n;i++){
        //     cout<< sum[i]<<endl;
        // }
        // cout<<'e'<<endl;
        int arr[n+1][n+1];
        int temp=0;
        // arr[0][0]=nums[0];
        for(int i=0;i<=n;i++){
            for (int j=i+1;j<=n;j++){
                // cout<<i<<" "<<j<<" "<<temp<<endl;
                if( ( (sum[j]-sum[i]) == k )   ){
                    temp+=1;   
                }
            }
        }
    return temp;
    }
};
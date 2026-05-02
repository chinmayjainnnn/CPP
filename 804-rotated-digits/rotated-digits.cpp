class Solution {
public:
    int rotatedDigits(int n) {
        vector<int> dp(n+1,-1);
        int count=0;
        for(int i=1;i<=n;i++){
            int temp=i;
            int ans=1;
            // cout<<"i="<<i<<endl;
            while(temp>0){
                if(dp[temp]!=-1 ){
                    if(dp[temp]==0)ans=0;
                    else if(dp[temp]==1 && ans==1)ans=1;
                    else ans=2;
                    break;
                }
                int rem=temp%10;
                if(rem==2 || rem==5 || rem ==6 || rem ==9)ans=2;
                else if(rem==3 ||rem==7|| rem ==4){
                    ans=0;
                    break;
                } 
                temp=temp/10;
                // cout<<temp<<" "<<ans<<endl;
            }
            dp[i]=ans;
            // cout<<"for i ans="<<ans<<endl;
            if(ans==2)count++;
        }
        return count;
    }
};
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size(),t=0,sum=0;
        cout<<n<<endl;
        for(int i=n-1;i>=0;i--,t++){
            if((t+1)%3!=0){
                sum=sum+cost[i];
                cout<<sum<<" ";
            }
            
        }
        

        
        return sum;
    }
};
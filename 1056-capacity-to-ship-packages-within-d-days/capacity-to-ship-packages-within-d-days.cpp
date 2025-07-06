class Solution {
public:
    int check(vector<int>& weights, int days, int maxi){
        int count=0;
        int d=1;
        // cout<<"debug"<<endl;
        for(int i=0;i<weights.size();i++){
            if(count+weights[i]<=maxi){
                count+=weights[i];
            }
            else{
                if(d==days || weights[i]>maxi ){
                    return false;
                }
                d++;
                count=weights[i];
            }
            // cout<<count<<" "<<d<<endl;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
          int tot=0;
          for(int i=0;i<weights.size();i++){
            tot+=weights[i];
          }
          if(days<2)return tot;
          int s=0,e=tot,mid,ans;

          while(s<e){
            mid=s+(e-s)/2;
            // cout<<s<<" "<<mid<<" "<<e;
            if(check(weights,days,mid)){
                ans=mid;
                e=mid;
                // cout<<"fit"<<endl;
            }
            else{
                s=mid+1;
                // cout<<"unfit"<<endl;
            }
            
          }
        return ans;
    }
};
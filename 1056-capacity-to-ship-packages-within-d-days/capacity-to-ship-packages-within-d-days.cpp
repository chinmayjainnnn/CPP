class Solution {
public:
    int check(vector<int>& weights, int days,int mid)
    {
      int d=0,i=0,n=weights.size();
      do
      {
        int temp=0;
        while((i<n) && (temp+weights[i]<mid) &&(weights[i]<mid)){temp+=weights[i++];}
        if(i==n){return 1;}
        d++;
      }while(d<days);
      if(d<=days){return 0;}
      else{return 1;}
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int start=0,end,ans=0;
    end = accumulate(weights.begin(),weights.end(),0 ); 
      while(start<end)
      {
        int mid= (start+end)/2;
        if(check(weights,days,mid)){ans=mid;end=mid;}
        else{start=mid+1;}
      }
      if(ans!=0){return ans-1;}
      else{return end;}
    }
};
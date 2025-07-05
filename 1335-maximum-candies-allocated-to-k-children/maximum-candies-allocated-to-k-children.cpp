class Solution {
public:
    bool check(vector<int>& candies, long long k,long long max){
        long long temp=0;

        for(int i=0;i<candies.size();i++){
            int num=candies[i]/max;
            temp+=num;
            if(temp>=k)return true;    
        }
        
        return false;
    }


    int maximumCandies(vector<int>& candies, long long k) {
        long long total=0;
        for(int i=0;i<candies.size();i++){
            total+=candies[i];
        }
        if(k>=total){
            return total/k;
        }
        long long s=0,e=total/k +1,mid;
        int ans=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid==0)return 1;
            // cout<<s<<" "<<mid<<" "<<e;
            if(check(candies,k,mid) ){
                ans=mid;
                s=mid+1;
                // cout<<"fit"<<endl;   
            }
            else{
                e=mid-1;
                // cout<<"unfit"<<endl;
            }

        }
        
        return ans;
    }
};
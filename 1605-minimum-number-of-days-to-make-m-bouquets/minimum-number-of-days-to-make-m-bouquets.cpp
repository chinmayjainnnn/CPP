class Solution {
public:
    int minDays(vector<int>& bloomday, int m, int k) {
        int start=1,end=0,mid,ans=-1;
        for(auto i:bloomday){
            if(end<i)end=i;
        }
        while(start<=end){
            mid=start+(end-start)/2;
            if(enough(bloomday,m,k,mid)){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }

        return ans;
    }
    
    int enough(vector<int>& bloomday, int m, int k, int mid){
        int bou=0,b=0;
        for(auto i:bloomday){
            if(i<=mid){
               bou++; 
               if(bou==k){
                   bou=0;
                   b++;
               }
            }
            else{bou=0;} 
        }
        if(b>=m)return 1;
        return 0;
    }
};
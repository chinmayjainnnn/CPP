class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int start=1,end=piles[n-1];
    
        int mid,k=1,hr;
    
        while(start<=end){
            mid=((start+end)/2);
            hr=h;
            cout<< mid << " " << k << " "<<start<< " "<<end << endl;
            for(auto i :piles){
                hr=hr-ceil((double)i/(double)mid);
                if(hr<0)break;
            }   
            if(hr>=0){
                end=mid-1;
                k=mid;
            }
            else{
                start=mid+1;
            }
        }
        return k;
    }
};
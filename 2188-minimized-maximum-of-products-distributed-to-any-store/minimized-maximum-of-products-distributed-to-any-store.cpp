class Solution {
public:
    int distribute(int n, int k ,vector<int>& quantities){
        
        for(auto i:quantities){ 
            n=n-(ceil(i/(float)k));
        }
       
        
        if(n<0)return 0;
        else return 1;

    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int start = 1, end=0,mid;
        
        for(auto i:quantities){
            if(end<i)end=i;
        }
        int temp=end;
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(distribute(n,mid,quantities)){
                temp=mid;
                end=mid-1;    
            }
            else{
                start=mid+1;
            }
        }
        return temp;
    }
    
};
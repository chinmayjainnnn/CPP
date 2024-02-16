class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int n=num.size();
        vector<int> res;
        int carry=0;
        for(int i=0;i<n;i++){
            
            res.push_back(  (num[n-i-1]+(k%10)  + carry)%10 );
        
            if( (num[n-i-1] + (k%10)+carry) >9 ){
                carry=1;   
            }
            else{
                carry=0;
            }
            k=k/10;

        }
        
        while( (k+carry)>0 ){
            res.push_back(  (k+carry)%10 );
            if( (k%10)+carry >9 ){
                carry=1;   
            }
            else{
                carry=0;
            }
            k=k/10;
        }

        reverse(res.begin(),res.end());
        return res;
    }
    
};
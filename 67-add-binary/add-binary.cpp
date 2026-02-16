class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1;
        int m=b.size()-1;
        string ans;
        int carry=0;
        for(;n>=0 || m>=0;n--,m-- ){
            int x,y,sum,rem;
            if(n>=0 && (a[n]=='1')){
                x=1;
            }
            else{
                x=0;
            } 
            if(m>=0 && b[m]=='1'){
                y=1;
            }
            else{
                y=0;
            } 
            sum=x+y+carry;
            rem=sum%2;
            ans.push_back(rem+'0');
            carry=sum/2;
                        
        }
        if(carry)ans.push_back('1'); 
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
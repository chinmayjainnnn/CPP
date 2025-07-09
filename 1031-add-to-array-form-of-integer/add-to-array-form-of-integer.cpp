class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0,n=num.size();
        int i=n-1;
        vector<int> ans;

        while( i>=0){
            int temp=carry+num[i]+k%10;
            k=k/10;
            i--;
            ans.push_back(temp%10);
            carry=temp/10;
        }
        
        while(k){
            int temp= carry+k%10;
            ans.push_back(temp%10);
            carry=temp/10;
            k=k/10;
        }
        if(carry)ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
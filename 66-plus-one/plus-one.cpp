class Solution {
public:

    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int prev=1,carry=0;
        for(int i=n-1;i>=0;i--){
            carry=(digits[i]+prev)/10;
            digits[i]=(digits[i]+prev)%10;
            prev=carry;
        }
        if(prev){
            digits.insert(digits.begin(),1);
        }

    return digits;
    }
};
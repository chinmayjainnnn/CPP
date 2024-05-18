class Solution {
public:
    string largestOddNumber(string num) {
    int n=num.size()-1;
    while(n>=0 &&num[n]%2==0)n--;
    num.erase(num.begin()+n+1,num.end());

    
    return num;}
    
};
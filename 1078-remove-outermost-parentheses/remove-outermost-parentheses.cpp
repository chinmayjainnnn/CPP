class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int n=s.size();
        int a=0;
        
        for(int i=1;i<n-1;i++){
            if(s[i]=='('){
                a--;
                ans.push_back('(');
                // cout<<"2"<<endl;
            }
            else {
                a++;
                if(a==1){
                    i++;
                    a=0;
                }
                else{
                    ans.push_back(')');
                }
                
                // cout<<"3"<<endl;
            }
        }
    return ans;
    }
};
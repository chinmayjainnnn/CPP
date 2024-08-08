class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> stack ;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['  ){
                stack.push(s[i]);
            }
            else if(s[i]==')'  ){
                if(!stack.empty() && stack.top()=='('){
                    stack.pop();
                }
                else return false;
            }
            else if(s[i]==']'  ){
                if(!stack.empty() && stack.top()=='['){
                    stack.pop();
                }
                else return false;
            }
            else if(s[i]=='}'  ){
                if(!stack.empty() && stack.top()=='{'){
                    stack.pop();
                }
                else return false;
            }
            else{
                 
            }
        }
    
    if(stack.empty()){
        return true;
    }
    else return false;
    }

};
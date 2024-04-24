class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        int n=s.size();
        stack.push(s[0]);
        for(int i=1;i<n;i++){
            if(stack.empty()){stack.push(s[i]);}
            else{
            if(stack.top()==s[i]){
                stack.pop();
            }
            else{
                stack.push(s[i]);
            }}
            
        }

        string s2 = "";


        while (!stack.empty()) {
            s2=stack.top() + s2;
            stack.pop();
        }
        
    return s2;

    }
};
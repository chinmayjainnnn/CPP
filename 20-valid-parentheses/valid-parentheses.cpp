class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        st.push(s[0]);
        for(int i=1;i<n;i++){
            
            if(!st.empty() && st.top()=='(' && s[i]==')')
                st.pop();
            else if(!st.empty() && st.top()=='{' && s[i]=='}')
                st.pop();
            else if(!st.empty() && st.top()=='[' && s[i]==']')
                st.pop();
            else 
                st.push(s[i]);
        }
        return st.empty();
    }
};
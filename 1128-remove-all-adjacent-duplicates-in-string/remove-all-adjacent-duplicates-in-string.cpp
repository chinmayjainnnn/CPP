class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty() && st.top()==s[i])st.pop();
            else(st.push(s[i]));
            // cout<<i<<" "<<st.size()<<endl;
        }
        if(st.empty())return{};
        s="";
        int n=st.size();
        for(int i=0;i<n;i++){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
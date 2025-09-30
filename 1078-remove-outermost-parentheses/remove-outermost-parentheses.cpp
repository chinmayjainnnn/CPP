class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=-1;
        for(auto it:s){
            // cout<<it<<endl;
            if(it=='(' ){
                if(count>-1){
                    ans.push_back(it);
                }
                count++;
            }
            else{
                if(count>0){
                    ans.push_back(it);
                }
                count--;
            }
        }
    return ans;
    }
};
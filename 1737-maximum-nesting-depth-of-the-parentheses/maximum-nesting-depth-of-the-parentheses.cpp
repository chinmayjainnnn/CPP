class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int max=0,count=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                if(count>max){
                    max=count;
                }
                
            }
            else if(s[i]==')'){
                count--;
            }
            // cout<<i<<' '<<count<<' '<<max<<endl;
        }
    return max;}
};
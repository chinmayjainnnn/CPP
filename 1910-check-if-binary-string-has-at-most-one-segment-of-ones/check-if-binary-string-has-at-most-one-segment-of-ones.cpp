class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(flag==0 && s[i]=='1'){
                flag=1;
            }
            else if(flag==1 && s[i]=='0'){
                flag=2;
            }
            else if(flag==2 && s[i]=='1'){
                return false;
            }
            // cout<<i<<" "<<flag<<endl;
        }
        return true;
    }
};
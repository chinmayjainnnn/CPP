class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ump2;
        unordered_map<char,char> ump;
        int n=s.size();

        for(int i=0;i<n;i++){
            int one,two;
            one=ump.find(s[i])==ump.end();
            two=ump2.find(t[i])==ump2.end();
            if((!one && !two && (ump[s[i]]!=t[i] || ump2[t[i]]!=s[i])) || ((one&& !two) || (!one && two)  ) ){
                return false;
                
            }           
            else if(one && two){
                ump[s[i]]=t[i];
                ump2[t[i]]=s[i];
            }
            else{
                // cout<<one<<" "<<two<< s[i]<<" "<<ump[s[i]]<<" "<<t[i]<<" "<<ump2[t[i]]<<endl;
            }
        }

    return true;}
};
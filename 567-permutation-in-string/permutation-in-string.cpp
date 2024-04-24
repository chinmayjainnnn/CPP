class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int n2=s2.size();
        unordered_map <char,int> h1;
        unordered_map <char,int> h2;

        
        if(n>n2)return 0;
        for(int i=0;i<n;i++){
            h1[s1[i]]+=1;
        }
        
        for(int i=0;i<n;i++){
            h2[s2[i]]+=1;
        }
        
        for(int i=0;i<n2-n+1;i++){
        
            if(h1==h2){
                return 1;
            }
            if(h2[s2[i]]>1){
                h2[s2[i]]-=1;
            }
            else{
                h2.erase(s2[i]);
            }
            
            h2[s2[i+n]]+=1;
        }
    return 0;
    }
};
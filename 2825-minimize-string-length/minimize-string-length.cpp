class Solution {
public:
    int minimizedStringLength(string s) {
        int n= s.size();
        
        unordered_map <char,int> h;
        int s2=0;
        for(int i=0;i<n;i++){
            if(h[s[i]]==0){
                h[s[i]]+=1;
                s2++;
            }
            
            
        }
        return s2;
    }
};
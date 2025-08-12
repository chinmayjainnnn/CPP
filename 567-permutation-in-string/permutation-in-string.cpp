class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        if(n1>n2)return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i=0;i<n1;i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        
        for(int i=n1;i<=n2;i++){
            if(mp1==mp2)return true;
            
            if(mp2[s2[i-n1]]==1){
                mp2.erase(s2[i-n1]);
            }
            else mp2[s2[i-n1]]--;
            mp2[s2[i]]++;
        }
        return false;
    }
};
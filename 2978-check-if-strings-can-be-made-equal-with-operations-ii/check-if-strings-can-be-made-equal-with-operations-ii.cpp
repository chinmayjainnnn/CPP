class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> even(26,0);
        vector<int> odd(26,0);
        int n=s1.size();

        for(int i=0;i<n;i++){
            if(i%2){
                odd[s1[i]-'a']+=1;
            }
            else{
                even[s1[i]-'a']+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2){
                odd[s2[i]-'a']-=1;
            }
            else{
                even[s2[i]-'a']-=1;
            }
        }
        for(int i=0;i<26;i++){
            if(even[i]!=0 ||odd[i]!=0)return false;
        }
        return true;

    }
};
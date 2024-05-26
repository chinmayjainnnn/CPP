class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        string ans="";
        int count;
        for(int i=0;i<n;i++){
            count=1;
            while( (i<n) && count!=9 && word[i]==word[i+1] ){
                count++;
                i++;
                
            }
            ans+=to_string(count)+word[i];
        }
    return ans;
    }
};
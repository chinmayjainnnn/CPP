class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            
            int m=words[i].size();
            if(m>s.size())continue;
            count++;
            for(int j=0;j<s.size() && j<m;j++){
                if(s[j]!=words[i][j]){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
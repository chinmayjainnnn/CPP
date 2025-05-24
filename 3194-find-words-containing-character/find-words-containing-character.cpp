class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int len=words.size();
        for(int i=0;i<len;i++){
            int l=words[i].size();
            for(int j=0;j<l;j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }

        }
        return ans;
    }
};
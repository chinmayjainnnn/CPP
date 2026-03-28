class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int n=strs.size();
        int minlen=strs[0].size();
        for(int i=0;i<n;i++){
            minlen=min(minlen,(int)strs[i].size());
        }
        for(int j=0;j<minlen;j++){
            char c=strs[0][j];
            for(int i=0;i<n;i++){
                if(c!=strs[i][j]){
                    return ans;
                }
            }
            ans.push_back(c);
        }    
        return ans;
        }
        
};
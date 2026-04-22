class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size();
        int m=dictionary.size();
        int o=queries[0].size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int dist=0;
                for(int k=0;k<o;k++){
                    if(queries[i][k]!=dictionary[j][k]){
                        dist++;
                    }
                    if(dist>2)break;
                }
                if(dist<=2){
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
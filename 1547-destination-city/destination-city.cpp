class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        unordered_map<string,int> mp;

        for(int i=0;i<n;i++){
            mp[paths[i][0]]=1;
        }
        for(int i=0;i<n;i++){
            if(mp.find(paths[i][1])==mp.end())return paths[i][1];
        }
    return paths[0][1];
    }
};
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for(vector<int> v:items1){
            mp[v[0]]+=v[1];
        }
        for(vector<int> v:items2){
            mp[v[0]]+=v[1];
        }
        vector<vector<int>> ans;
        for(auto i:mp){
            ans.push_back({i.first,i.second});
        }
        return ans;
    

    }

};
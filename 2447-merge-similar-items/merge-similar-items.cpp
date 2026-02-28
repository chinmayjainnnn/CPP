class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for(auto iter:items1){
            mp[iter[0]]+=iter[1];
        }
        for(auto iter:items2){
            mp[iter[0]]+=iter[1];
        }
        vector<vector<int>> ans;
        for(auto i:mp){
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};
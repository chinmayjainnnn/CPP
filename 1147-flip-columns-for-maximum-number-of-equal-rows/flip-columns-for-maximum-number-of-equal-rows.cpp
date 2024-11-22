class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        map<vector<int>,int> mp;
        for(int i=0;i<m;i++){
            mp[matrix[i]]+=1;
        }
        int maxi=1;
        for(auto it:mp){
            vector<int> comp(n);
            for(int i=0;i<n;i++){
                comp[i]=!it.first[i];
            }
            maxi=max(it.second+mp[comp],maxi);
        }        
        return maxi;
    }
};
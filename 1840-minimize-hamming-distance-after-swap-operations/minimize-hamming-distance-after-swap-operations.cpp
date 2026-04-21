class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int x){
        if(parent[x]!=x){
            parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void merge(int a,int b){
        int ra=find(a),rb=find(b);
        if(ra==rb)return;
        if(rank[ra]<rank[rb])parent[ra]=rb;
        else if(rank[rb]<rank[ra])parent[rb]=ra;
        else{
            parent[rb]=ra;
            rank[ra]++;
        }
    }
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& a) {
        int n=source.size();
        parent.resize(n);
        rank.resize(n,0);
        iota(parent.begin(), parent.end(), 0);
        for(auto it:a){
            merge(it[0],it[1]);
        }
        unordered_map<int,unordered_map<int,int>> ump;
        for(int i=0;i<n;i++){
            ump[find(i)][source[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int par=find(i);
            auto &freq=ump[par];
            int val=target[i];
            if(freq.count(val) && freq[val]>0 ){
                freq[val]--;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};
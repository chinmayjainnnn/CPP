class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        int f=friends.size();
        unordered_map<int,int> ump;
        vector<int> ans;

        for(int i=0;i<f;i++){
            ump[friends[i]]=1;
        }
        for(int i=0;i<n;i++){
            int id=order[i];
            if(ump.find(id)!=ump.end()){
                ans.push_back(id);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            pq.push(make_pair(i.second,i.first));
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
    return ans;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        unordered_map<int,int> mp;
        for(auto i:freq){
            if(mp[i.second]++>0)return 0;
            
        }
        return 1;
    }
};
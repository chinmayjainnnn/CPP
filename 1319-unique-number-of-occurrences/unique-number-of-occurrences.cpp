class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        vector <int> vec;
        for(auto it:mp){
            cout<<it.second<<endl;
            vec.push_back(it.second);
        }
        int temp=0;
        sort(vec.begin(),vec.end());
        for(auto it:vec){
            if(it==temp)return false;
            temp=it;
        }
        return true;
        
    }
};
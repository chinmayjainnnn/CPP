class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int n=arr.size();

        for(auto i:arr ){
            mp[i]++;
        }

        vector <int> arr2;
        for(auto i:mp){
            arr2.push_back(i.second);
        }
        sort(arr2.begin(),arr2.end());
        n=arr2.size();
        int i;
        for( i=0;i<n;i++){
            k=k-arr2[i];
            if(k<0)break;
        }
        return  n-i;
        
    }
};
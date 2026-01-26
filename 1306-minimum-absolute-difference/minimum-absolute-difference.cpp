class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int mindif=arr[1]-arr[0],n=arr.size();
        for(int i=0;i<n-1;i++){
            int dif=arr[i+1]-arr[i];
            mindif=min(mindif,dif);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==mindif){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        
        return ans;
    }
};
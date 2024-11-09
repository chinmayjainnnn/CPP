class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        int t=0;
        for(int i=1;i<n;i++){
            if(ans[t][1] >= arr[i][0] ){
                if(ans[t][1]< arr[i][1])
                    ans[t][1]=arr[i][1];
            }
            else{
                ans.push_back(arr[i]);
                t++;
            }
                
        }
    return ans;
    }
};
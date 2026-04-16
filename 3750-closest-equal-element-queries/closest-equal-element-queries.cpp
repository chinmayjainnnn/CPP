class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int m=queries.size();
        vector<int> ans(m,-1);
        for(int j=0;j<m;j++ ){
            int index=queries[j];
            int val=nums[index];
            auto &arr=mp[val];
            int s=0,e=arr.size()-1;
            int mid;
            if(!e)continue;
            while(s<=e){
                mid=s+(e-s)/2;
                if(arr[mid]==index){
                    break;
                }
                else if(arr[mid]>index){
                    e=mid-1;
                }
                else{s=mid+1;}
            }
            e=arr.size();
            int a=arr[(mid+1+e)%e];
            int b=arr[(mid-1+e)%e];
            ans[j]=min((a-index+n)%n,(index-b+n)%n );
        }
    return ans;
    }
};
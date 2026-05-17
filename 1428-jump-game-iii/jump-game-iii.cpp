class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
       int n=arr.size();
       vector<int> vis(n,0);
       queue<int> q;
        q.push(start);
        vis[start]=true;
       while(!q.empty()){
            int cur=q.front();
            q.pop();
            if(arr[cur]==0)return true;
            int val=arr[cur];
            

            if(cur-val>=0 && !vis[cur-val]){q.push(cur-val);vis[cur-val]=true;}
            if(cur+val<n && !vis[cur+val]){q.push(cur+val);vis[cur+val]=true;}
       }
       return false;
    }
};
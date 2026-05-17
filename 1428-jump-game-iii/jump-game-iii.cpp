class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
       int n=arr.size();
       vector<int> vis(n,0);
       queue<int> q;
        q.push(start);
        vis[start]=1;
       while(!q.empty()){
            int cur=q.front();
            int val=arr[cur];
            if(val==0)return true;
            q.pop();

            if(cur-val>=0 && !vis[cur-val]){q.push(cur-val);vis[cur-val]=1;}
            if(cur+val<n && !vis[cur+val]){q.push(cur+val);vis[cur+val]=1;}
       }
       return 0;
    }
};
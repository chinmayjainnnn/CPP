class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        int n=items.size(),q=queries.size();
        vector<int> answer(q);
        vector<pair<int,int>> que;
        
        for(int i=0;i<q;i++){
            que.push_back(make_pair(queries[i],i));
        }

        sort(items.begin(),items.end()); 
        sort(que.begin(),que.end());
        
        int t=0,i=0,maxi=0;

        while(t<n && i<q){
            // cout<<i<<" "<<t<<" "<<maxi<<endl;
            while(t<n && que[i].first>=items[t][0]){
                maxi=max(maxi,items[t][1]);
                t++;
            }
            answer[que[i].second]=maxi;
            i++;
            
        }
        while(i<q)answer[que[i++].second]=maxi;


        return answer;  
    }
};
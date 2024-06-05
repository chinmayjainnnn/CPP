class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.begin()+n );
        sort(s.begin(),s.begin()+m);
        int count=0;
        for(int j=0;j<m ;j++ ){
            if(g[count]<=s[j] ){
                count++;
                if(count==n){
                    break;
                }
            }
        }
    return count;}
};
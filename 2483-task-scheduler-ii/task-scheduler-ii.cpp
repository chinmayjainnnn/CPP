class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        int n=tasks.size();
        unordered_map<long long,long long> mp;
        long long ans=0;

        for(int i=0;i<n;i++){
            if(mp.find(tasks[i])!=mp.end()){
                if(ans-mp[tasks[i]]>space ){
                    mp[tasks[i]]=ans;
                    ans++;
                }
                else{
                    ans=mp[tasks[i]]+space+2;
                    mp[tasks[i]]=ans-1;
                }
            }
            else{
                mp[tasks[i]]=ans;
                ans++;
            }
        }
    return ans;
    }
};
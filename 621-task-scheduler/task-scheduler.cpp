class Solution {

public:
    
    int leastInterval(vector<char>& tasks, int n) {
    int m=tasks.size(),maxi=0,maxn=0;
    unordered_map<char,int> count;


    for(int i=0;i<m;i++){
        count[tasks[i]]++;
    }
    for(auto i:count){
        if(i.second>maxi){
            maxi=i.second;
            maxn=1;
        }
        if(maxi==i.second)maxn++;
        
    }
    
    return max(m,(maxi-1)*(n+1)+maxn-1);
    }
};

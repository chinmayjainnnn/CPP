class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int last=0;
        vector<int> freq(n+1,0);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            
            freq[a[i]]++;
            if(freq[a[i]]==2)ans[i]=++last;
            freq[b[i]]++;
            if(freq[b[i]]==2)ans[i]=++last;
            ans[i]=last;
            
        }
        return ans;
    }
};
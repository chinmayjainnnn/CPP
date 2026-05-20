class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int last=0;
        vector<int> freq(n+1,0);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            
            freq[a[i]]++;
            freq[b[i]]++;
            ans[i]=last;
            if(a[i]==b[i])ans[i]=++last;
            else {
                if(freq[a[i]]==2)ans[i]=++last;
                if(freq[b[i]]==2)ans[i]=++last;
            }
        }
        return ans;
    }
};
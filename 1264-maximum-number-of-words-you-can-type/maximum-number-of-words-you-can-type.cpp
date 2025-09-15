class Solution {
public:
    int canBeTypedWords(string text, string bl) {
        unordered_map<char,int> mp;
        for(int i=0;i<bl.size();i++){
            mp[bl[i]]+=1;
        }
        int n=text.size();
        int i=0;
        int ans=0,flag=1;
        while(i<n){
            
            if(text[i]==' '){
                if(flag){
                    ans++;
                }
                flag=1;
            }
            else if(mp.find(text[i])!=mp.end()){
                flag=0;
                // cout<<i<<endl;
            }
            i++;
            // cout<<i<<" "<<flag<<endl;
        }
        if(flag)ans++;
        return ans;
    }
};
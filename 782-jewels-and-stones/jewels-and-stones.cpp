class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        for(char c:jewels){
            s.insert(c);
        } 
        int ans=0;
        for(char c:stones){
            if(s.find(c)!=s.end()){
                ans++;
            }
        }
        return ans;
    }
};
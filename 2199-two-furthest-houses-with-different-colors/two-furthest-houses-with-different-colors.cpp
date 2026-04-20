class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int l=0,r=n-1, i=0;
        while(l<r){
            if(colors[l+i]!=colors[r] ){
                return r-l-i;
            }
            if(colors[l]!=colors[r-i]){
                return r-i-l;
            }
            i++;
        }
        return 0;
    }
};
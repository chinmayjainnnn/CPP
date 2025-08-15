class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int startrow=0,startcol=0,endcol=n-1,endrow=n-1;
        int count=0,total=n*n;
        
        while(count<total){
            for(int index=startcol;count<total && index<=endcol;index++){
                ans[startrow][index]=++count;
                // cout<<ans[startrow][index]<<" ";
            }
            startrow++;
            for(int index=startrow;count<total && index<=endrow;index++){
                ans[index][endcol]=++count;
                // cout<<ans[index][endcol]<<" ";
            }
            endcol--;
            for(int index=endcol;count<total && index>=startcol;index--){
                ans[endrow][index]=++count;
                // cout<<ans[endrow][index]<<" ";
            }
            endrow--;
            for(int index=endrow;count<total && index>=startrow;index--){
                ans[index][startcol]=++count;
                
            }
            startcol++;
            
        }
        
    return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][1]>=intervals[i][0] ){
                if(intervals[i-1][1]<=intervals[i][1]){
                    intervals[i-1][1]=intervals[i][1];
                }
                intervals.erase(intervals.begin()+i);
                i--;
            }

        }
        
    return intervals;}
};
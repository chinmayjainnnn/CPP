class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;
        vector<int> v1;
        v1.push_back(1);
        pt.push_back(v1);
        for(int i=1;i<numRows;i++){
            vector<int> v1;
            v1.push_back(1);
            for(int j=1;j<i;j++){
                v1.push_back(pt[i-1][j-1]+pt[i-1][j]);
            }
            v1.push_back(1);

            pt.push_back(v1);
        } 
        return pt;
    }
};
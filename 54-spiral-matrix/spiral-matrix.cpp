class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int max=n*m,count=0;
        vector<int> ans;
        for(int k=0;k<=min(n,m)/2;k++){
            int horizontal=k;

            for(int i=k;i<m-k;i++,count++){
                // cout<<horizontal<<" "<<i<<" ";
                ans.push_back(matrix[horizontal][i]);
            }
            // cout<<endl;
            // cout<<count<<endl;
            int vertical=m-k-1;
            if(count>=max)break;
            for(int j=k+1;j<n-k;j++,count++){
                // cout<<j<<" "<<vertical<<" ";
                ans.push_back(matrix[j][vertical]);
            }
            horizontal=n-k-1;
            // cout<<endl;
            // cout<<count<<endl;
            if(count>=max)break;
            for(int i=m-k-1-1;i>k;i--,count++){
                // cout<<horizontal<<" "<<i<<" ";
                ans.push_back(matrix[horizontal][i]);
            }
            vertical=k;
            // cout<<endl;
            // cout<<count<<endl;
            if(count>=max)break;
            for(int j=n-k-1;j>k;j--,count++){
                // cout<<j<<" "<<vertical<<" ";
                ans.push_back(matrix[j][vertical]);
            }
            if(count>=max)break;
            // cout<<endl;
            // cout<<count<<endl;
        }
        return ans;
    }
};
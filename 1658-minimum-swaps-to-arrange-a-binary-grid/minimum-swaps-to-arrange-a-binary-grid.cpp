class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        
        vector<int> t(n,0);
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==1){
                    t[i]=j;
                    break;
                }
            }
        }
        vector<int> t2=t;
        sort(t2.begin(),t2.end());
        for(int i=0;i<n;i++){
            if(t2[i]>i)return -1;
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            if(t[i]>i){
                int j=i+1;
                while(t[j]>i){j++;}
                // cout<<i<<" "<<j<<endl;
                while(i<j){
                    swap(t[j],t[j-1]);
                    j--;
                    ans++;
                }    
            }
            
        }
        
        
        return ans;
    }
};
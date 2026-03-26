class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        long total=0;
        unordered_map<long,int> top,bottom;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val=grid[i][j];
                total+=val;
                bottom[val]+=1;
            }
        }
        long sum1=0;
        long sum2=total;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val=grid[i][j];
                sum1+=val;
                sum2-=val;
                top[val]++;
                bottom[val]--;
                if(bottom[val]==0)bottom.erase(val);
            }
            if(sum1==sum2)return true;
            long dif=sum1-sum2;
            if(sum1>sum2){
                dif=sum1-sum2;
                if(top.find(dif)!=top.end()){
                    if(m!=1){
                        if(i!=0)return true;
                        if(grid[0][0]==dif || grid[0][m-1]==dif)return true;
                    }   
                    else if(grid[0][0]==dif || grid[i][0]==dif)return true;             
                }
            }
            else if( bottom.find(sum2-sum1)!=bottom.end()){
                dif=sum2-sum1;
                if(m!=1 ){
                   if(i!=n-2)return true;
                   cout<<"here"<<endl;
                   if(grid[n-1][0]==dif||grid[n-1][m-1]==dif)return true;                    
                }
                else if(grid[i+1][0]==dif || grid[n-1][0]==dif)return true;
            }
        }
        top.clear();
        bottom.clear();
        sum1=0;
        sum2=total;
        for( int j=0;j<m;j++){
            for( int i=0;i<n;i++){
                int val=grid[i][j];
                bottom[val]+=1;
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                int val=grid[i][j];
                sum1+=val;
                sum2-=val;
                top[val]++;
                bottom[val]--;
                if(bottom[val]==0)bottom.erase(val);
            }
            if(sum1==sum2)return true;
            long dif;
            if(sum1>sum2){
                dif=sum1-sum2;
                if(top.find(dif)!=top.end()){
                    if(n!=1){
                        if(j!=0   )return true;
                        if(grid[0][0]==dif || grid[n-1][0]==dif)return true;
                    }
                    else if(grid[0][0]==dif ||grid[0][j]==dif)return true;
                }
                
            }
            else if( bottom.find(sum2-sum1)!=bottom.end()){
                dif=sum2-sum1;
                if(n!=1){
                    if(j!=m-2)return true;
                    if(grid[0][m-1]==dif || grid[n-1][m-1]==dif)return true;
                }
                else if(grid[0][j+1]==dif || grid[0][m-1]==dif)return true;
            }
        }
        return false;
        }
};
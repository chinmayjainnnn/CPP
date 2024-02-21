class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue <int, vector<int>, greater<int>> minh;
        int n=heights.size();
        int r=0;

        for(int i=1;i<n;i++){
            if(heights[i-1]<=heights[i]){
                if(r<ladders){
                    minh.push(heights[i]-heights[i-1]);
                    r++;
                }
                else{
                    
                    if( (r>0) && (heights[i]-heights[i-1]) > minh.top()){
                        if(bricks>=minh.top()){
                            bricks-=minh.top();
                            minh.pop();
                            minh.push(heights[i]-heights[i-1]);
                        }
                        else{
                            return i-1;
                        }
                    }
                    else{
                        if(bricks>=(heights[i]-heights[i-1])){
                            bricks-=(heights[i]-heights[i-1]);
                        }
                        else{
                            return i-1;
                        }
                    }
                }       
            }
        }
        return n-1;  
    }
};
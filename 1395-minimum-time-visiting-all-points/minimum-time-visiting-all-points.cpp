class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0,n=points.size();

        for(int i=0;i<n-1;i++){
            int x1=points[i][0];
            int x2=points[i+1][0];
            int y1=points[i][1];
            int y2=points[i+1][1];
            int x=abs(x2-x1),y=abs(y2-y1);

            int a=max(x,y)-min(x,y);
            int b=max(x,y)-a;

            sum+=a+b;

        }
        return sum;  
    }
};
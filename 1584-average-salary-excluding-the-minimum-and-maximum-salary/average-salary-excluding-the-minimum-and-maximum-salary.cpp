class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        
        double avg,sum=0;
        for(int i=1;i<salary.size()-1 ;i++){sum+=salary[i];}
        avg=sum/(salary.size()-2);
        return avg;    
    }
};
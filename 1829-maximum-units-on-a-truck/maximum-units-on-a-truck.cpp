// class sortsec{
// public:
    static bool sortsec(const vector<int> &a,const vector<int> &b){
        return (a[1]>b[1]);
    }
// }
class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),sortsec);
        int n=boxTypes.size(),ans=0;

        for(int i=0;i<n && truckSize>0 ;i++){
            int no=boxTypes[i][0],unit=boxTypes[i][1];
            if(no<=truckSize){
                ans=ans+no*unit;
                truckSize=truckSize-no;
            }        
            else{
                ans=ans+truckSize*unit;
                break;
            }
            // cout<<no<<" "<<unit<<" "<<ans<<endl;
        }
        return ans;
    }
};
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
      int j=0;
      for(auto i:hours){
          if(i>=target){
              j++;
          }
      }  
      return j;
    }
};
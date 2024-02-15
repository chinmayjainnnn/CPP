class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool> arr;
       int max=0;
       for(auto i:candies){
           if(max<i)max=i;
       } 
       
       int n=candies.size();
       for(int i=0;i<n;i++){
           if(max <= candies[i] + extraCandies){
               arr.push_back(true);
           }
           else arr.push_back(false);

       }
       return arr;
    }
};
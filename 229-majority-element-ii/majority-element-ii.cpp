class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr; 
        int n=nums.size();
        unordered_map<int,int> ump;

        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        for(auto i:ump){
            if(i.second>n/3 ){
                arr.push_back(i.first);
            }
        }
    return arr;
    }
};
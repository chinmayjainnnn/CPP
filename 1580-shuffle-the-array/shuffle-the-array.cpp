class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> new1;
        int i=0,j=n;

        while(i<n){
            new1.push_back(nums[i++]);
            new1.push_back(nums[j++]);
        }
        return new1;
    }
};
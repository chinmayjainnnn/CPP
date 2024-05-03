class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        int pos=0,neg=0;
        

        while(pos<n && neg <n ){
            while(nums[pos++]<0){
                if(pos==n){break;}
            }
            arr.push_back(nums[pos-1]);
            while(nums[neg++]>=0){
                if(neg==n){break;}
            }
            arr.push_back(nums[neg-1]);
        }

        
        

    return arr;
    }
};
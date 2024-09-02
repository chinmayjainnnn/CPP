class Solution {

public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0],votes=1,n=nums.size();

        for(int i=1;i<n;i++){
            if(votes==0)
                maj=nums[i];
            if(maj==nums[i]){
                votes++;
            }
            else if(maj!=nums[i]){
                votes--;
            }

        //cout<<maj<<" "<<votes<<endl;
        }
        return maj;        
    }
};

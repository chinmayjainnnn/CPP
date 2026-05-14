class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        for(int i:nums){
            if(i>n-1 )return false;
            arr[i]+=1;
        }
        for(int i =1;i<n-1;i++){
            // cout<<"i="<<i<<" val="<<arr[i]<<endl;
            if(arr[i]!=1)return 0;
        }
        if(arr[n-1]!=2)return 0;
        return 1;
    }
};
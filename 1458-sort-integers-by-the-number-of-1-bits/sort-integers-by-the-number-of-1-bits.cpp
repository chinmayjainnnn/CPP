class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> nums(32);
        for(int i=0;i<n;i++){
            int bits=0;
            int num=arr[i];
            while(num){
                bits+=(num%2);
                num=num/2;
            }
            nums[bits].push_back(arr[i]);
        }
        int i=0;
        for(auto &row:nums){
            for(auto b:row){
                cout<<b<<endl;
                arr[i++]=b;
            }
        }
        return arr;
    }
};
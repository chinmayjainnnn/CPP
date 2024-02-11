class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector <int> rsum;
       vector <int> lsum;

        int n=nums.size();
        int sum=0;
        
        for(int i=0; i<n;i++){
            lsum.push_back(sum);
            sum+=nums[i];
        }
        sum=0;

        for(int i=n-1;i>=0;i--){
            rsum.push_back(sum);
            sum+=nums[i];
        }
        reverse(rsum.begin(),rsum.end());

        for(int i=0;i<n;i++){
            if(lsum[i]==rsum[i]){return i;}
        }
        
        
        return -1;
        
    }
};
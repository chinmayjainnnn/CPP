class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        double max;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        max=sum/(double)k;
        
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            if(sum/(double)k >max ){
                max=sum/(double)k;
            }
            // cout<<max<<endl;
        }

        return max;
    }
};
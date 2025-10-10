class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int peak=-1;

        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                peak=i;
                break;
            }
        }
        // cout<<peak<<endl;
        if(peak==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        int min,val=nums[peak-1];

        for(int i=n-1;i>peak-1;i--){
            if( nums[i]>val){
                min=i;
                break;
            }
        }
        // cout<<min<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        swap(nums[min],nums[peak-1]);
        // for(int i=0;i<n;i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        sort(nums.begin()+peak,nums.end());
        return;
    }
};
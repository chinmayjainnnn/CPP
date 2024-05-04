class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int peak=-1;
        int temp=0;
        for(int i=n-1;i>0;i--){
            if(nums[i] > nums[i-1]  ){
                peak=i;
                break;
            }
        }
        
        if(peak==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int x;

        for(int i=n-1;i>=peak;i--){
            if(nums[i] >nums[peak-1]   ){
                x=i;
                break;
            }
        }
        temp=nums[x];
        nums[x]=nums[peak-1];
        nums[peak-1]=temp;
        sort(nums.begin()+peak,nums.end() );
        return;

    }
};
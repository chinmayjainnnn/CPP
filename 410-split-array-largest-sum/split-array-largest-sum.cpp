class Solution {
public:
    bool check(vector<int>& nums, int k,int max){
        int sa=1;
        int temp=0;
        // cout<<" debug"<<endl;
        for(int i=0;i<nums.size();i++){
            if(temp +nums[i]<=max){
                temp+=nums[i];
            }
            else{
                if(sa>=k || nums[i]>max){
                return false;
                }
                temp=nums[i];
                sa++;
            }
            // cout<<temp<<" "<<sa<<" "<<max<<endl;
        }

        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int s=0,e=sum,mid;
        int ans;
        while(s<=e){
            mid=s+(e-s)/2;
            // cout<<s<<" "<<mid<<" "<<e;
            if(check(nums,k,mid)){
                e=mid-1;
                ans=mid;
                // cout<<"fit"<<endl;
            }
            else {
                s=mid+1;
                // cout<<"unfit"<<endl;
            }

        }
        return ans;
    }

};
class Solution {
public:
    void addbits(vector<int> &bits,int no){
        int i=0;
        while(no){
            bits[i]+=no%2;
            no=no/2;
            i++;
        }
    }
    void removebits(vector<int> &bits,int no){
        int i=0;
        while(no){
            bits[i]-=no%2;
            no=no/2;
            i++;
        }
    }
    int bintoint(vector<int> &bits){
        int ans=0;
        for(int i=0;i<32;i++){
            // cout<<bits[i]<<" ";
            if(bits[i]>0){
                ans=ans+(1<<i);
            }
            
        }
        return ans;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> bits(32,0);
        int ans=n,f=-1;
        
        for(int right=0,left=0;right<n;right++){
            addbits(bits,nums[right]);
            while(bintoint(bits)>=k && left<=right  ){
                removebits(bits,nums[left]);
                if(ans>right-left+1)ans=right-left+1;
                left++;
                f=1;
            }
        }
        if(f==-1)return -1;
        return ans;
    }
};
class Solution {
public:
    int rec(vector<int>& nums,int start,bool temp,int arr[][2]){
        if( arr[start][temp] != -1){return arr[start][temp];}
        
        if(start==nums.size()-1){
            if(temp==0){return nums[start];}
            return max(nums[start],0);
        }
        
        if(!temp){
            arr[start][temp]=max( (rec(nums,start+1,1,arr )+nums[start]),(rec(nums,start+1,0,arr)));
            return arr[start][temp];
        }
        else{ 
            arr[start][temp]=max(  (rec(nums,start+1,1,arr) +nums[start]),0);
            return arr[start][temp];
        }
        
    }

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int arr[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                arr[i][j]=-1;
            }
        }
        return rec(nums,0,0,arr);
        
    }

};
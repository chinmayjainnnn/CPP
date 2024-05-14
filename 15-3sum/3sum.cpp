class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int> ump;
        vector<vector<int>> ans;
        map<vector<int>,bool> has;
        int temp=1;
        for(int i=0;i<n;i++){
            int tar=-nums[i];
            // temp=1;
            for(int j=i-1;j>=0;j--){
                int target=tar-nums[j];
                if(   !temp &&  ( i>0 && nums[i]==nums[i-1] )  &&   ( j>0 &&  nums[j]==nums[j-1])   ){break;}
                vector<int> v1;
                if(ump.find(target) != ump.end() &&  (i !=j)  && (j != ump[target]) && (i!=ump[target])){
                    v1.push_back(nums[i]);
                    v1.push_back(target);
                    v1.push_back(nums[j]);
                    sort(v1.begin(),v1.end());
                    if(!has[v1]){
                        ans.push_back(v1);
                        has[v1]=true;
                        temp=1;

                    }
                    else{temp=0;}
                }   
            }
            ump[nums[i]]=i;
        }
    return ans;
    }
};























// int n=nums.size();
//         unordered_map<int,int> arr;
//         vector<vector<int>> ans;
//         // unordered_map<vector<int>,int> t;
        
//         for(int i=0;i<n;i++){
            
//             int target=-nums[i];
//             arr[-target]++;
//             for(int j=0;j<i;j++){
//                 int temp=target-nums[j];
//                 vector<int> v1;
//                 if(arr.find(temp)!=arr.end()){
//                     v1.push_back(-target);
//                     v1.push_back(temp);
//                     v1.push_back(nums[j]);
//                     sort(v1.begin(),v1.end());
                    
//                     ans.push_back(v1);

//                 }

//             }
//         }
//     return ans;
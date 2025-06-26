class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            int a=nums1[i],b=nums2[j];
            if(a==b ){
                ans.push_back(a);
                int temp=a;
                while(i<nums1.size() && temp==nums1[i]  )i++;
                while(j<nums2.size() && temp==nums2[j]  )j++;
            }
            else if(a>b){
                j++;
            }
            else{
                i++;
            }
        }

    return ans;
    }
    
};
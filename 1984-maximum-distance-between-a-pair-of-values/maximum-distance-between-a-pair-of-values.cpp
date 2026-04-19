class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int i=0,j=0;
        int ans=0;
        while(i<n&&j<m){
            // int a=nums1[i],b=nums2[j];
            if(i<=j && nums1[i]<=nums2[j])ans=max(j-i,ans);
            if(nums1[i]>nums2[j]){
                i++;
            }
            else{
                j++;
            }
            // cout<< i<<" "<<j<<endl;

        }
        return ans;
    }
};
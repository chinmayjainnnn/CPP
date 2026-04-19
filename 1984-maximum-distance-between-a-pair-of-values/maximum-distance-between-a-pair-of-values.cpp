class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int i=0,j=0;
        int ans=0;
        while(i<n&&j<m){
            int a=nums1[i],b=nums2[j];
            if(i<=j && a<=b)ans=max(j-i,ans);
            if(a>b){
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
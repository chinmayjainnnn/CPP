class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1=nums2;
            return;
        }
        if(n==0)return;

        int i=m-1,j=n-1;
        for(int k=m+n-1;k>=0;k--){
            if(i>=0 && j>=0){
                if(nums2[j]>nums1[i])
                    nums1[k]=nums2[j--];
                else
                    nums1[k]=nums1[i--];
            }
            else if(i<0)
                nums1[k]=nums2[j--];
            else
                nums1[k]=nums1[i--];
        }
    }
};
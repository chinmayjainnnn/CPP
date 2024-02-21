class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int i=0;
        while(left!=right){
            left=left>>1;
            right=right>>1;
            i++;
        }
        for( ;i>0;i--){
            left=left<<1;
        }
        return left;
    }
};
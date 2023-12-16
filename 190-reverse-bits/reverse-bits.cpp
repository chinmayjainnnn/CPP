class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long int rev=0;
        for(int i=0;i<32;i++)
        {
            rev= (2*rev) +(n&1);
            n=n>>1;
        }
        return rev;
    }
};
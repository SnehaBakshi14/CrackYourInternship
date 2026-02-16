class Solution {
public:
    int reverseBits(int n) 
    {
        if(n ==0)return 0;
        int res = 0;
        for(int i =0;i<32;i++)
        {
            res <<=1;// to make space for lsb of n ;
            res = (res|n&1); // appending lsb in result
            n >>=1;// right shifting n to get new lsb 
        }
        return res;
        
    }
};
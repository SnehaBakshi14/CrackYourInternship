class Solution {
public:
    char findKthBit(int n, int k) 
    {
        int len = (1<<n)-1;// 2^n-1
        if(n==1) return '0';// base case

        if(k < ceil(len/2.0))// present in left half 
        {
            return findKthBit(n-1, k);
        }
        else if(k == ceil(len/2.0))
        {
            return '1'; // exactly middle element will always be the appended 1

        }
        else
        {
            // k>len/2 present in right half
            char ch = findKthBit(n-1, len-(k-1));// handled reverse bit
            return (ch =='0')?'1':'0';
        }
        
    }
};
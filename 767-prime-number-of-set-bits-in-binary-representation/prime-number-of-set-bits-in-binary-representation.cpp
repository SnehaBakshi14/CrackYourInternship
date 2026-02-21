class Solution {
public:
    int countPrimeSetBits(int left, int right) 
    {
        int res =0;
        
        unordered_set<int>prime = {2,3,5,7,11,13,17,19};
        for(int i = left ;i<=right;i++)
        {
            int setbits = __builtin_popcount(i);

            if(prime.count(setbits))
            {
                res += 1;
            }
        }
        return res;
    }
};
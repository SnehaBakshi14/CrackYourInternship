class Solution {
public:
    int smallestNumber(int n, int t) 
    {
        for(int i = n; i<= n+9;i++)
        {
            int temp = i;
            int prod = 1;
            while(temp > 0)
            {
                int d = temp%10;
                prod = prod * d;
                temp/= 10;
            }
            if(prod % t == 0)
            {
                return i;
            }

        }
        return -1;
    }
    // In any block of 10 consecutive integers, there is always one number whose last digit is 0. Any number containing the digit 0 has a digit product of 0, and 0 is divisible by every positive t. Therefore, a valid answer must appear within at most 10 consecutive numbers."
};
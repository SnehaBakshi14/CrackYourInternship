#include <numeric>
class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
        int sumOdd = 0, sumEven =0;
        sumOdd = n*n;
        sumEven = n*(n+1);
        return gcd(sumEven, sumOdd);
    }
};
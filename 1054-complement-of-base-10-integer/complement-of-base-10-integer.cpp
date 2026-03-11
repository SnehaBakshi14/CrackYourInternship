class Solution {
public:
    int bitwiseComplement(int n) 
    { 
        int cnt =0 ;// for power of 2
        int res =0;
        if(n == 0)
        {
            return 1;
        }
        while(n)
        {
            int r = n%2;
            res += pow(2,cnt) * !r;
            n = n/2;
            cnt ++;

        }
        return res;
        
    }
};
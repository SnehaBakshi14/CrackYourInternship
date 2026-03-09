class Solution {
public:
    int M = 1e9+7;
    int t[201][201][2];
    int solve(int onesleft , int zerosleft , bool lastwasone , int limit)
    {
        if(onesleft == 0 && zerosleft == 0)
        {
            return 1;
        }
        if(t[onesleft][zerosleft][lastwasone] != -1)
        {
            return t[onesleft][zerosleft][lastwasone];
        }
        int res =0;
        if(lastwasone == true)// explore 0's 
        {
            for(int len =1;len <= min(zerosleft , limit);len++)
            {
                res = (res +solve(onesleft , zerosleft-len , false , limit))%M;
            }
        }
        else
        {
            // explore 1's
            for(int len =1;len <= min(onesleft , limit);len++)
            {
                res = (res + solve(onesleft-len , zerosleft , true, limit))%M;
            }
        }
        return t[onesleft][zerosleft][lastwasone] = res ;
    }
    int numberOfStableArrays(int zero, int one, int limit) 
    {
        memset(t , -1, sizeof(t));
            int startwithones = solve(one , zero, false , limit);
            int startwithzero = solve(one , zero , true , limit);

            return (startwithones + startwithzero)%M;
            

        // TC(Ones *Zeros*limit)
        // SC O(ones * zeros)
    }
};
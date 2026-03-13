class Solution {
public:
    typedef long long ll;
    bool Check(ll mid ,int mountainHeight, vector<int>& workerTimes)
    {
        ll h =0; // height a worker can reduce in mid time 
        for(int& t : workerTimes)
        {
            h += (ll)(sqrt(2*mid/t + 0.25)-0.5);
            if(h >= mountainHeight) return true;
        }
        return h >= mountainHeight;
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes)
    {
        // using binary search on answer (in this case time) template 
        // ques of minimising the maximum
        int maxtime = *max_element(begin(workerTimes),end(workerTimes));
        ll l = 1;
        ll r = (ll)maxtime * mountainHeight * (mountainHeight+1)/2.0;
        ll res =0;
        while(l <= r)
        {
            ll mid = l + (r-l)/2;
            if(Check(mid ,mountainHeight , workerTimes))
            {
                res =mid;
                r = mid-1;
            }
            else
            {
                l = mid+1; // was not able to make mountainheight 0 in mid time 
            }
        }
return res;
    }
    // TC O (N * log(r-l)) l is very small 
    // TC O(N * log(Tmax * MH^2)) == TC = O(N * 16log 10)
};
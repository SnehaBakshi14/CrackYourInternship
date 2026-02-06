class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        int l =0, r=0;
        int longestbalancedarraylen =1;
         int maxi = 0;
          int min = 0;
        sort(nums.begin(), nums.end());
        while(r < n)
        {
             maxi = nums[r];
             min = nums[l];
            while( l < r && maxi > (long long)k*min)
            {
                // not valid 
                l++;
                min = nums[l];
            }
            longestbalancedarraylen = max(longestbalancedarraylen , (r-l+1)); 
            r++;

        }
        return n-longestbalancedarraylen;// no of delerions required
    }
};
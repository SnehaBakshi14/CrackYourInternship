class Solution {
public:
    int longestOnes(vector<int>& nums, int k) // longest subarray with atmost k zeros 
    {
        int n = nums.size();
        int l = 0 , r =0 , maxlen = 0, zeros =0 , len =0;
        while(r < n)
        {
            if(nums[r] == 0) zeros ++;

            if(zeros > k)
            {
                if(nums[l] == 0 )
                zeros--;
                l++;
            }
            if(zeros <= k)
            {
                len = r-l+1;
                maxlen = max(maxlen , len);
            }
            r++;
        }     
        return maxlen;   
    }
};
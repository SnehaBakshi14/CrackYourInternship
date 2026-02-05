class Solution {
public:
    int numSubarraysWithLessOREqualSum(vector<int>& nums, int goal)
    {
        if(goal < 0) return 0;
        int l =0,r=0, cnt =0, sum =0;
        int n = nums.size();
        while(r < n)
        {
            sum +=  nums[r];

            while(sum > goal)
            {
                sum -= nums[l];
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int cnt1 = numSubarraysWithLessOREqualSum(nums, goal);
        int cnt2 = numSubarraysWithLessOREqualSum(nums, goal-1);
        return cnt1-cnt2;
    }
    // TC = 2(O(2N))
    //SC = O(1)
};
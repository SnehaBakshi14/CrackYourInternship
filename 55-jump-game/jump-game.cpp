class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n = nums.size();
        int maxindx = 0;
        for(int i =0;i<n;i++)
        {
            if(i > maxindx)
            {
                return false;
            }
            if( maxindx <= n-1)
            {
                maxindx = max(maxindx , i+nums[i]);
            }
        }
        return true;
    }
};
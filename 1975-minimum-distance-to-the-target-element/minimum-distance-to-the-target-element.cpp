class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int res = INT_MAX;
        int n = nums.size();
        for(int i =0;i<n && res > abs(i-start);i++)// as i will increase res will also increase 
        {
            if(nums[i] == target)
            {
                res = min(res , abs(i-start));
            }
        }
        return res;
        
    }
};
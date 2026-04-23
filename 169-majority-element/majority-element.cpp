class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int candidate ; // current guess
        int cnt  =0;
        for(int i =0;i<n;i++)
        {
            if(cnt == 0)
            {
                candidate = nums[i];
            }
            if(nums[i] == candidate)
            {
                cnt ++;
            }
            else 
            {
                cnt--;
            }
            
        }
        return candidate;
    }// TC o(n) SC O(1)
};
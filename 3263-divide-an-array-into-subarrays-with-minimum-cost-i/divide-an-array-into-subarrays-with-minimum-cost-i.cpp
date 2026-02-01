class Solution {
public:
    int minimumCost(vector<int>& nums) 
    {
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        int score = nums[0]; // always have to pick 1st score 
        for(int i = 1; i<nums.size();i++)
        {
            if(nums[i] < firstMin) // will need the min element and second element from the remaining 
            {
                secondMin = firstMin;
                firstMin = nums[i];
            }
            else if(nums[i] < secondMin)
            {
                secondMin = nums[i];
            }
        }
        return score + firstMin + secondMin;
    }
};
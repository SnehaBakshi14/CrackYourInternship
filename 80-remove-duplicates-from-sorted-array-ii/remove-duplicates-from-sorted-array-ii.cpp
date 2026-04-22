class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        int i =2, j =2; // keeping first 2 elements as unique
        if(n <= 2)
        {
            return n;
        }
        while(j< n)
        {
            if(nums[j] == nums[i-2])
            {
                j++;
            }
            else
            {
                nums[i] = nums[j];
                i++;;
                j++;
            }

        }
        return i;
        
    }
};
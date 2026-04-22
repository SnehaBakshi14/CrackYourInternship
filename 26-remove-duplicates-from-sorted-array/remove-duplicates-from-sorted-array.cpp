class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        int i =1, j= 1;// first element is always unique keeping it 
        // 2 pointers for  One, that would keep track of the current element in the original array and another one for just the unique elements.
        while( j < n)
        {
            if(nums[j] == nums[i-1])
            {
                j++;
            }
            else
            {
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return i ;
    }
    // TC O(n)
};
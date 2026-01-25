class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
         int n =  nums.size();
         int i =0 , j= 1; // i represents unique number , j brings unique number to i
         while(j <n)
         {
            if(nums[i] != nums[j]) // unique element found 
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
         }    
         return (i+1);
    }
};
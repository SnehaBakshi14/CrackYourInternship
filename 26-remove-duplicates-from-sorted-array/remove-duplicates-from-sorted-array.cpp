class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        int i =0;// point to unique element
        int j =0;// bring unique element to i
        while(j<n)
        {
            if(nums[i] != nums[j])// got a unique element
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
    }
};
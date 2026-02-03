class Solution {
public:
    bool isTrionic(vector<int>& nums) 
    {
        int n = nums.size();
        int i =0;
        while(i+1< n && nums[i] < nums[i+1])// first increasing
        {
            i++;
        }
        if(i==0 || i == n-1)return false ; // i reached end or not found
        while(i+1 < n && nums[i] > nums[i+1])// decreasing
        {
            i++;
        }
        if(i == n-1)// check if i reached the end before inc
        {
            return false;
        }
        while(i+1 < n && nums[i] < nums[i+1])
        {
            i++;
        }
        if(i == n-1)// after inc then dec then inc if i reach end then true
        {
            return true;
        }
        return false;
    }
};
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        // Approach 1 
        int n = nums.size();
        string res;
        for(int i =0;i<n;i++)
        {
            char ch = nums[i][i];

            res += (ch == '0' )? "1" : "0"; // reverse the ith charchater of ith string in nums to have unique combination
        }
        return res;
    }
};
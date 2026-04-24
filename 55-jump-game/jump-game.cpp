class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n = nums.size();
        int maxIndex = 0;
        for(int i =0;i<n;i++)
        {
            if(i > maxIndex) return false; // you cannot reach an index greater than max index
            maxIndex = max(maxIndex , (i + nums[i]));
            if(maxIndex > n-1) break; // if crosses n that means you reached the end
        }
        return true;
    }
    // TC O(N) SC 0(1)
};
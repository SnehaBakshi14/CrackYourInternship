class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>res(n);
        for(int i =0;i<n;i++)
        {
            int shift = nums[i]%n;// reducing the large shift int range of 0-n-1
            int newIndex = (i + shift)%n ; // will handle -ve and +ve left and right
            if(newIndex < 0) // in case of left out of bound
            {
                newIndex += n;
            }
            res[i] = nums[newIndex];
        }
        return res;
    }
};
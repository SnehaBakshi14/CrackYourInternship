class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int &x : nums)
        {
            mp[x]++;
            if(mp[x] > floor(n/2))
            {
                return x;
                break;
            }
        }
        return 0;
    }
};
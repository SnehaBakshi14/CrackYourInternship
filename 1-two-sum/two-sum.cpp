class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // int n = nums.size();
        // unordered_map<int,int> map;
        // for(int i = 0;i<n;i++)
        // {
        //     map[nums[i]] = i;//index ki mapping o_o
        // }

        // for(int i =0;i<n;i++){
        //     if(map.find((target - nums[i])) != map.end() && i != map[(target-nums[i])])
        //     {
        //         return {i,map[(target-nums[i])]};
        //     }
        // }
        // return {-1,-1};

        // Approach map
        int n = nums.size();
        map<int,int>mp;// no and its index
        for(int i =0;i<n;i++)
        {
            int rem = target - nums[i];
            if(mp.find(rem) != mp.end())
            {
                return {mp[rem],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
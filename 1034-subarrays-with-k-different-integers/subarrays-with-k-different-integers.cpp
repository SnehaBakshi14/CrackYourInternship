class Solution {
public:
    int subarraysWithLessOrEqualKDistinct(vector<int>& nums, int k)
    {
        int l =0,r=0,cnt =0;
        unordered_map<int,int>mp;// num, freq
        int n = nums.size();
        while(r < n)
        {
            mp[nums[r]]++;
            while(mp.size() > k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                {
                    mp.erase(nums[l]);
                }
                l = l+1;
            }
            cnt += r-l+1;
            r= r+1;
        }
        return cnt;
    
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return subarraysWithLessOrEqualKDistinct(nums , k) -     subarraysWithLessOrEqualKDistinct(nums , k-1);
    }
    // TC = 2(O(2N))
    // SC = O(N)
};
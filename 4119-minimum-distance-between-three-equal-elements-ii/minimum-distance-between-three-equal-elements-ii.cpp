class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> mp; // storing as num ->> vector of indices in which the number is present
        int res = INT_MAX ; // 2(K-I) came from abs(i - j) + abs(j - k) + abs(k - i)
        for(int k =0;k<n;k++)
        {
            mp[nums[k]].push_back(k);

            if( mp[nums[k]].size() >= 3)
            {
                // i,j,k
                vector<int> &vec = mp[nums[k]]; // has idices
                int size = vec.size();
                int i = vec[size-3];
                res = min(res , 2*(k-i));

            }
            
        }
        return res == INT_MAX ? -1: res;
    }
    // TC O(n)
    // SC O(n)
};
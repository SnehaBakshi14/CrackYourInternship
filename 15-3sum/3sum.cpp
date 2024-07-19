class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        // Approach Hashset TLE
        // int n = nums.size();
        // set<vector<int>>st;// to store unique set of triplets
        //     for(int i =0;i<n;i++)
        //     {
        //         set<int>hashset;// reintialise when i increments
        //         for(int j = i+1;j<n;j++)
        //         {
        //             int third = -(nums[i]+nums[j]);
        //             if(hashset.find(third) != hashset.end())
        //             {
        //                 vector<int>temp = {nums[i],nums[j],third};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //             hashset.insert(nums[j]);
        //         }
        //     }
        //     vector<vector<int>>ans(st.begin(),st.end());
        //     return ans;
        
        // Approach 2 Two Pointer
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum >0)
                {
                    k--;
                }
                else
                {
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    // do not go for same element
                    while(j<k && nums[j]== nums[j-1])
                    {
                        j++;
                    }
                    while(j<k && nums[k]== nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    string  getmappedstr(string &num,vector<int>&mapping)
    {
        string mappedno = " ";
        for(int i =0;i<num.length();i++)
        {
            char ch = num[i];
            int it = ch - '0';
            mappedno += to_string(mapping[it]);
        }
        return mappedno;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        int n = nums.size();
        vector<pair<int,int>>vec;//{mappedno ,index}
        for(int i =0;i<n;i++)
        {
            string num = to_string(nums[i]);
            string mappedstr = getmappedstr(num,mapping);
            int mappedno = stoi(mappedstr);
            vec.push_back({mappedno,i});
        }
        sort(vec.begin(),vec.end());
        vector<int>result;
        for(auto &p:vec)
        {
            int orignalindex = p.second;
            result.push_back(nums[orignalindex]);
        }
        return result;
    }
};
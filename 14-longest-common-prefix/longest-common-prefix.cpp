class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        sort(strs.begin() , strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        // sorting ensures that first and last words will have the maximal difference in their prefix
        int mini = min(first.length(), last.length());
        // cannot compare beyond the shorter word
        string prefix = "";
        for(int i =0;i<mini;i++)
        {
            if(first[i] != last[i])
            {
                return prefix;
            }
            else
            {
                prefix += first[i];
            }
        }
        return prefix;
    }
    // tc o(n logn + m) sorting + comparision
};
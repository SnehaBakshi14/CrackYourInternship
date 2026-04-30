class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) return "";

        string first = strs[0];
        string prefix = "";

        for(int i = 0; i < first.length(); i++)
        {
            prefix += first[i];  // build prefix step by step

            for(int j = 1; j < strs.size(); j++)
            {
                // check length condition
                if(strs[j].length() < prefix.length() || 
                   strs[j].substr(0, prefix.length()) != prefix)
                {
                    return prefix.substr(0, prefix.length() - 1);
                }
            }
        }

        return prefix;
    }
};


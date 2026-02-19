class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int n = s.size();
        int res =0;
        int prevcount =0;
        int currcount = 1;
        for(int i = 1;i<n ;i++)
        {
            if(s[i] == s[i-1])
            {
                currcount ++;
            }
            else // found next pattern of similar elements
            {
                res += min(prevcount ,currcount);
                prevcount = currcount;
                currcount =1;
            }
        }
        return res + min(prevcount , currcount);// as i gets out of bound , we add ans of that part here
        // TC O(n) SC O(1)
    }
};
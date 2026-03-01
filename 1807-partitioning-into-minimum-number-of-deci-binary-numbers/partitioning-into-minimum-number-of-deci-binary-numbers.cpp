class Solution {
public:
    int minPartitions(string n)
    {
        int ans =0;
        for(char x: n)
    {
        int curr = x-48; // ascii value from string 
        ans = max(curr , ans);
    }
        return ans;
    }
    // find max value from string
};
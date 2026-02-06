class Solution {
public:
    string minWindow(string s, string t) 
    {
        int m = t.size();
        int n = s.size();
        int l =0,r=0, cnt =0, minlen = INT_MAX , startIndex = -1;
        vector<int> hash(256, 0);
        for(int i =0;i<m;i++)
        {
            hash[t[i]]++;
        }
        while(r < n)
        {
            if(hash[s[r]] > 0) //1 element found in t
            {
                cnt += 1;
            }
             hash[s[r]]--;
            while(cnt == m )
            {
                if(r-l+1 < minlen)
                {
                    minlen = r-l+1;
                    startIndex = l;

                }
                hash[s[l]]++;
                if(hash[s[l]] > 0)// resinsert
                cnt -= 1;
                l++;
            }
            r += 1;
        }
                    
        return startIndex == -1 ? "" : s.substr(startIndex , minlen); 
    }
};
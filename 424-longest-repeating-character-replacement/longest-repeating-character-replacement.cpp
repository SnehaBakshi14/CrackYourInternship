class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.size();
        int l =0, r=0 , maxlen =0 , maxfreq =0;
        vector<int>hash(26, 0);
        // no of conversions req = len-maxfreq , because you will flip less freq character
        while(r<n)
        {
            hash[s[r] - 'A']++;
            maxfreq = max(maxfreq , hash[s[r] - 'A']);
            if((r-l+1) - maxfreq > k)// not valid condition
            {
                hash[s[l]-'A']--;
                maxfreq = 0;
                l= l+1;
            }
            if((r-l+1) - maxfreq <= k)// valid
            {
                maxlen = max(maxlen , r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};
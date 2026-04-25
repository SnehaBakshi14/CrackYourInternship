class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int n = citations.size();
        sort(citations.begin(), citations.end());
        int hindex = 0  ;
        for(int i =0; i<n;i++)
        {
            if(citations[i] >= (n-i))
            {
                hindex = max(hindex , n-i);
            }
        }
        return hindex;
    }
    // TC O(n log n) + O(n) 
};
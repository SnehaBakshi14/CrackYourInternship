class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        int n = s.length();
        unordered_set<string>st;
        int codes = 1<<k ; // pow(2,k)

        for(int i =k;i<=n;i++)
        {
            string sub = s.substr(i-k , k);
            if(!st.count(sub))
            {
                st.insert(sub);
                codes --;
            }
            if(codes == 0)
            {
                return true;
            }
        }
        
        return false;
    }
    // TC 0(N * K) SC O(2^K * K)
};
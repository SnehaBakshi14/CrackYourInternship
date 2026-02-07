class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n = s.size();
        stack<int>st;
        int cnt =0;
        for(int i =0;i<n;i++)
        {
            if(!st.empty() && s[i] == 'a' && st.top() == 'b')// not valid pair of indices found  , a ke baad b can come not vice versa
            {
                st.pop();
                cnt += 1;
            }
            else
            {
                st.push(s[i]);
            }
        }
        return cnt;
        
    }
};
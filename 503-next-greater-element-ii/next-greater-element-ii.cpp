class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>nge(n);
        stack<int>st;
        for(int i = 2*n-1; i>=0;i--)
        {
            while(!st.empty() && st.top() <= nums[i%n])
            {
                st.pop();
                // for circular array consider idx = i%n
            }
            if(i<n)// for these elements we need nge as we hypothetically double the array
            {
                nge[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i%n]);
        }   
        return nge; 
    }
};
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        stack<int>st;
        int maxiarea =0;
        int ele;
        for(int i =0;i< heights.size() ;i++)
        {
            while(!st.empty() &&  heights[st.top()] >= heights[i] )
            {
                //The popped item is to be considered as the nse

                ele = st.top();
                st.pop();

                int nse = i ;
                int pse = st.empty() ?  -1 : st.top();

                maxiarea = max(maxiarea , heights[ele]*(nse-pse-1));
            }
            st.push(i);
        }
        // For the remaining items in the stack, next smaller does
    // not exist. Previous smaller is the item just below in
    // stack.
    int n = heights.size();
     while(!st.empty())
     {
        ele = st.top();
        st.pop();
        int nse = n;
        int pse = st.empty() ? -1 : st.top();
        
        maxiarea = max(maxiarea ,  heights[ele] * (nse - pse -1));
     }
      return maxiarea;
    }
   
    // TC O(N) + O(N) SC O(N)
};
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
   
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        // compute the prefix sum matrix to represent length / height of bars adding up the 1's and restting when encountring 0
       vector<vector<int>> psum(n, vector<int>(m, 0));
      
        for(int j =0;j<m;j++)
        {
            int sum = 0;
            for(int i =0;i<n;i++)
            {
                if(matrix[i][j] == '1')
                sum += 1;
                if(matrix[i][j] ==  '0')
                {
                    sum =0;

                }
                psum[i][j] = sum;
            }
        }
        int maxiarea =0;
        for(int i =0;i<n;i++)
        {
            maxiarea = max(maxiarea , largestRectangleArea(psum[i]));// this will give the entire row as vector 
        }
        return maxiarea;

    } 
    // TC O(M*N) + O(N * 2M)
    // SC 0(N*M) + O(N)
};
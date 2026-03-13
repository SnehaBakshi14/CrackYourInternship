class Solution {
public:
    int M = 1e9+7;
    vector<int>findNSE(vector<int>& arr)
    {
        int n = arr.size();
        vector<int>nse(n);
        stack<int>st;
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                
                st.pop();
            }
            nse[i] = st.empty()? n:st.top();
            st.push(i);// we store indexes in stack 
        }
    return nse;
    }
    vector<int>findPSE(vector<int>& arr)
    {
        int n = arr.size();
        vector<int>pse(n);
        stack<int>st;
        for(int i = 0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()] > arr[i])// will not check =  because considering only one side front to avoid confusion and selecting same subarry
            {
                
                st.pop();
            }
            pse[i] = st.empty()? -1:st.top();
            st.push(i);// we store indexes in stack 
        }
        return pse;
    }
    
    int sumSubarrayMins(vector<int>& arr) 
    {
        vector<int> nse = findNSE(arr);// next smaller element
        vector<int> pse = findPSE(arr);// previous smaller element
        int total =0;
        int n = arr.size();
        for(int i =0;i<n;i++)
        {
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total+ (left * right *1LL * arr[i])%M)%M ;

        }
        return total;
    }
    // TC O(5N) SC 0(5N)
    // Logic used - find out how many subarray having the i the element as minimum can be formed 
};
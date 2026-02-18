class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack<int>st;
        vector<int>nge(10001 , -1);
        int n = nums2.size();
        for(int i = n-1 ;i>= 0;i--)
        {
            while(!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }
            if(st.empty()) nge[nums2[i]] = -1;// we do not use current index , we want Next greater element for value nums2[i]
        
            else nge[nums2[i]] = st.top();

            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int num : nums1)
        {
            ans.push_back(nge[num]);
        }
        return ans;
    }
};
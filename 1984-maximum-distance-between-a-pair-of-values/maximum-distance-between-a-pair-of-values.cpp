class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) 
    {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;// nums1
        int j = 0;// num2
        int res =0;
        while(i< m && j<n)
        {
            if(nums1[i] > nums2[j])
            {
                i++;
            }
            else
            {
                res = max(res , j-i);
                j++; // why not checking i <=j here - because j-i will result in negative in this scenario and wont affect our result
            }
        }
        return res ; // O(M+N)
        
    }
};
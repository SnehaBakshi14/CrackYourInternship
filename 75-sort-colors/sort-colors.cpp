class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        // One pass algo 
        int n = nums.size();
        int i =0;// denotes for 0;
        int j =0;// denotes for 1;
        int k =n-1;// denotes for 2;

        while(j<=k)// till j crosses k
        {
            if(nums[j] == 1)
            {
                j++;
            }
            else if( nums[j] == 2)
            {
                swap(nums[j],nums[k]);
                k--;// because k was fixed in last
            }
            else
            {
                swap(nums[j],nums[i]);// for 1
                i++;
                j++;
            }
        }
        
    }
};
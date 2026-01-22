class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1,maxi1 = INT_MIN,maxi2 = INT_MIN;
        for(auto i : nums){
            prod *= i;
            maxi1 = max(maxi1,prod);
            if(prod == 0) prod = 1;
        }
        prod =1;
        for(int i=nums.size()-1; i>0;i--){
            prod *= nums[i];
            maxi2 = max(maxi2,prod);
            if(prod == 0) prod = 1;
        }
        return max(maxi1,maxi2);
    }
};
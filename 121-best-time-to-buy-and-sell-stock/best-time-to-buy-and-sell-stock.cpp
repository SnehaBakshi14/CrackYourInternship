class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini_price = prices[0];
        int maxi_profit = INT_MIN;
        for(int i =1 ;i<prices.size();i++)
        {
            if(prices[i] < mini_price)
            {
                mini_price = prices[i];
            }
            else
            {
                maxi_profit = max(maxi_profit , prices[i] - mini_price);
            }
        }
        return (maxi_profit <= 0) ? 0 : maxi_profit;
    }
};
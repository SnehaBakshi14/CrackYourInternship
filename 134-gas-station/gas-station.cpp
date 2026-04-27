class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n = gas.size();
        int tank = 0; // to check if Can I reach next station from current start
        int total = 0; // Is it even possible to complete the circle at all
        int start = 0; // to find the starting index where circular route is complete 
        for(int i =0;i<n;i++)
        {
            total += gas[i] - cost[i];
            tank += gas[i]-cost[i];
            if(tank < 0)
            {
                tank =0;
                start = i+1;
            }

        }
    return (total < 0) ? -1 : start;
    }
};
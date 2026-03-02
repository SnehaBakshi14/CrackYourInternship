class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) 
    {
        int n = grid.size(); // no of rows = no of columns;

        vector<int>endzeros(n,0);// no of consecutive 0's from end

        for(int i =0;i<n;i++)
        {
            int j = n-1;// start from end
            int count =0;
            while(j>=0 && grid[i][j] == 0)
            {
                count ++;
                 j--;
            }
           endzeros[i] = count ;
         }
        int steps =0;
        for(int i =0;i<n;i++)
        {
            // check every row
            int need = n-i-1;
            int j = i;// to check if it already has the required 0's
            while(j<n && endzeros[j] < need)
            {
                j++;
            }
            if(j == n)
            {
                return -1;// cannot satisfy the need and reached end 
            }
            steps += j-i;

            while(j>i)
            {
                swap(endzeros[j], endzeros[j-1]);
                j--;
            }
        }
        return steps;
    }
};
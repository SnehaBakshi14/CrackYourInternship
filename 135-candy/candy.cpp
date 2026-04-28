class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n = ratings.size();
        int candy = n; // Each child must have at least one candy.
        int i =1 ;
        while(i<n)
        {
            if(ratings[i] == ratings[i-1])
            {
                i++;
                continue;
            }
            int peak =0; // increasing slope
            // new peak for every mountain
            while(ratings[i] > ratings[i-1])
            {
                peak++;
                candy += peak;
                i++;
                if(i == n) return candy;
            }
            int dip = 0; // decreasing slope 
            while(i<n && ratings[i] < ratings[i-1])
            {
                dip++;
                candy += dip;
                i++;
            }
            candy -= min(peak , dip); // both got added we will keep the maximum one
        }
        return candy;
    }
};
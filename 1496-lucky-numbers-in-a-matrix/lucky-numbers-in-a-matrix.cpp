class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int rminMax = INT_MIN;
        for(int r =0;r<m;r++)
        {
            int rmin = INT_MAX;
            for(int c=0;c<n;c++)
            {
                rmin = min(rmin, matrix[r][c]);// minimum of every row
            }
            rminMax = max(rminMax,rmin);// maximum from all minimum 
        }
        int cmaxMin = INT_MAX;
        for(int c =0;c<n;c++)
        {
            int cmax = INT_MIN;
            for(int r=0;r<m;r++)
            {
                cmax = max(cmax, matrix[r][c]);// maximum of every column
            }
            cmaxMin = min(cmaxMin,cmax);// minimum  from all maximum 
        }
        if(cmaxMin == rminMax)
        {
            return {cmaxMin};
        }

        return {};
    }
};
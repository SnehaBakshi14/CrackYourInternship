class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        // Approach 1 Brute - Better Use of column and row array 
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>row(m,0); // row array
         vector<int>col(n,0);// col array

        for(int i = 0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
         for(int i = 0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }

        
    }
};
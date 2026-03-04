class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
      int m = mat.size();
      int n = mat[0].size();
      vector<int>Rows(m,0);// how many ones in rows and columns
       vector<int>Cols(n,0);
      for(int i =0;i<m;i++)
      {
        for(int j =0;j<n;j++)
        {
            if(mat[i][j] == 1)
            {
                Rows[i]++;
                Cols[j]++;
            }
        }
      }
      
      int result =0;
      
      for(int i =0;i<m;i++)
      {
        for(int j =0;j<n;j++)
        {
            if(mat[i][j] == 0)continue;

            if(mat[i][j] == 1 && Rows[i] == 1 && Cols[j] == 1 )
            {
                result ++;
            }
        }
      }
        return result;
        
    }
};
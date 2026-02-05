class Solution {
public:
    void solve(vector<vector<char>>& grid , int i , int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(i<0|| j < 0 ||i>=n || j>= m || grid[i][j] != '1' )return ;


        grid[i][j] = 'A';
        solve(grid,i+1,j);
        solve(grid,i-1,j);
        solve(grid,i,j+1);
        solve(grid,i,j-1);
        return ;
        
        
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(grid[i][j] == '1')
                {
                    solve(grid , i , j);
                    cnt++;

                }
            }
        }
        return cnt;
    }
};
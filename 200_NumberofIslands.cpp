// 200. Number of Islands - https://leetcode.com/problems/number-of-islands/

class Solution
{
public:
    void callDFS(vector<vector<char>> &grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        callDFS(grid, i - 1, j);
        callDFS(grid, i + 1, j);

        callDFS(grid, i, j - 1);

        callDFS(grid, i, j + 1);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    count += 1;
                    callDFS(grid, i, j);
                }
            }
        }
        return count;
    }
};
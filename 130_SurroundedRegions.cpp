// 130. Surrounded Regions - https://leetcode.com/problems/surrounded-regions/

class Solution
{
public:
    void travelDFS(vector<vector<char>> &board, int i, int j)
    {
        if (i < 0 || i > board.size() - 1 || j < 0 || j > board[0].size() - 1)
            return;
        if (board[i][j] == 'O')
            board[i][j] = '*';

        if (i > 0 && board[i - 1][j] == 'O')
            travelDFS(board, i - 1, j);
        if (i < board.size() - 1 && board[i + 1][j] == 'O')
            travelDFS(board, i + 1, j);
        if (j > 0 && board[i][j - 1] == 'O')
            travelDFS(board, i, j - 1);
        if (j < board[0].size() - 1 && board[i][j + 1] == 'O')
            travelDFS(board, i, j + 1);

        return;
    }
    void solve(vector<vector<char>> &board)
    {
        if (board.empty())
            return;
        int rows = board.size();
        int columns = board[0].size();

        for (int i = 0; i < rows; i++)
        {
            if (board[i][0] == 'O')
                travelDFS(board, i, 0);
            if (board[i][columns - 1] == 'O')
                travelDFS(board, i, columns - 1);
        }

        for (int i = 0; i < columns; i++)
        {
            if (board[0][i] == 'O')
                travelDFS(board, 0, i);
            if (board[rows - 1][i] == 'O')
                travelDFS(board, rows - 1, i);
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                if (board[i][j] == '*')
                    board[i][j] = 'O';
            }
        }
    }
};
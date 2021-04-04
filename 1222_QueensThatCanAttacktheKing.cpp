// 1222. Queens That Can Attack the King - https://leetcode.com/problems/queens-that-can-attack-the-king/

class Solution
{
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>> &queens, vector<int> &king)
    {
        vector<vector<int>> result;
        int seen[8][8];
        memset(seen, 0, sizeof(seen));
        for (auto i : queens)
        {
            seen[i[0]][i[1]] = 1;
        }

        int directions[3] = {-1, 0, 1};
        for (int dx : directions)
        {
            for (int dy : directions)
            {
                if (dx == 0 && dy == 0)
                    continue;
                int x = king[0];
                int y = king[1];
                while (x + dx >= 0 && x + dx < 8 && y + dy >= 0 && y + dy < 8)
                {
                    x = x + dx;
                    y = y + dy;
                    if (seen[x][y])
                    {
                        result.push_back({x, y});
                        break;
                    }
                }
            }
        }

        return result;
    }
};
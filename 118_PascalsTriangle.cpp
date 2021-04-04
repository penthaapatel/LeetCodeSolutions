// 118. Pascal's Triangle - https://leetcode.com/problems/pascals-triangle/

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;
        if (numRows == 0)
            return triangle;
        vector<int> row;
        row.push_back(1);
        triangle.push_back(row);

        for (int i = 1; i < numRows; i++)
        {
            vector<int> row;
            row.push_back(1);
            vector<int> prev = triangle[i - 1];
            for (int j = 1; j < i; j++)
            {
                row.push_back(prev[j - 1] + prev[j]);
            }

            row.push_back(1);
            triangle.push_back(row);
        }

        return triangle;
    }
};
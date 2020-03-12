//https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        //points is a 2D vector of ints
        int ans = 0;
        for (int i = 1; i < points.size(); i++)
        {
            ans += max(abs(points[i][0] - points[i - 1][0]), abs(points[i][1] - points[i - 1][1]));
        }
        return ans;
    }
};
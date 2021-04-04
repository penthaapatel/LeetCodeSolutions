//1557. Minimum Number of Vertices to Reach All Nodes - https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

class Solution
{
public:
    //Find list of vertices with indegree = 0
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> result;
        vector<int> temp(n, 0);
        for (auto e : edges)
        {
            temp[e[1]] += 1;
        }
        for (int i = 0; i < n; i++)
            if (temp[i] == 0)
                result.push_back(i);
        return result;
    }
};
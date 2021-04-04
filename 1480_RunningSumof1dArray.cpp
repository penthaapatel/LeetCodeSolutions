// 1480. Running Sum of 1d Array - https://leetcode.com/problems/running-sum-of-1d-array/

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> res;
        int sum = 0;
        for (int i : nums)
        {
            sum += i;
            res.push_back(sum);
        }
        return res;
    }
};
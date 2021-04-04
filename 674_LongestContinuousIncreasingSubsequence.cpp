// 674. Longest Continuous Increasing Subsequence - https://leetcode.com/problems/longest-continuous-increasing-subsequence/

class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int result = 0;
        int j = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i - 1] >= nums[i])
                j = i;
            result = max(result, i - j + 1);
        }

        return result;
    }
};
/*
53. Maximum Subarray - https://leetcode.com/problems/maximum-subarray/
*/

//Solution using Kadane's algorithm

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int current_sum = nums[0];
        int max_sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(current_sum, max_sum);
        }

        return max_sum;
    }
};
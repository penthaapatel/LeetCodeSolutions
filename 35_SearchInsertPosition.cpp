/*
35. Search Insert Position - https://leetcode.com/problems/search-insert-position/
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (target > nums[nums.size() - 1])
        {
            return nums.size();
        }

        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            (target > nums[mid]) ? l = mid + 1 : r = mid;
        }

        return l;
    }
};
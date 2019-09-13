/*
1. Two Sum - https://leetcode.com/problems/two-sum/
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int want = target - nums[i];
            if (m.find(want) != m.end())
            {
                result.push_back(m[want]);
                result.push_back(i);
            }
            else
            {
                m.insert(make_pair(nums[i], i));
            }
        }
        return result;
    }
};
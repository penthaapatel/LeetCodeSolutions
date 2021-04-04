// 169. Majority Element - https://leetcode.com/problems/majority-element/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto n : nums)
        {
            m[n]++;
        }
        int x = nums.size() / 2;
        for (auto i : m)
        {
            if (i.second > x)
                return i.first;
        }
        return -1;
    }
};
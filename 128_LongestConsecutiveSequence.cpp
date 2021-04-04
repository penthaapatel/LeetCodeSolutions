// 128. Longest Consecutive Sequence - https://leetcode.com/problems/longest-consecutive-sequence/

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        unordered_set<int> look;
        for (int num : nums)
        {
            look.insert(num);
        }

        int maxLongest = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int current = nums[i];
            int longest = 1;
            if (look.find(current - 1) == look.end())
            {
                while (look.find(current + 1) != look.end())
                {
                    current += 1;
                    longest += 1;
                }
            }

            maxLongest = max(maxLongest, longest);
        }

        return maxLongest;
    }
};
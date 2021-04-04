//26. Remove Duplicates from Sorted Array - https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int n = nums.size();
        if (n == 0)
            return 0;
        int i = 0;
        int j = 1;
        while (j < n)
        {
            if (nums[i] == nums[j])
            {
                j++;
            }
            else
            {
                nums[i + 1] = nums[j];
                i++;
                j++;
            }
        }

        return i + 1;
    }
};

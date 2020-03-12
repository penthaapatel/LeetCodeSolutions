/*
Link: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
*/

class Solution
{
public:
    vector<int> getNoZeroIntegers(int n)
    {
        for (int i = 1; i < n; i++)
        {
            if (notzero(i) && notzero(n - i))
            {
                return {i, n - i};
            }
        }
        return {};
    }

private:
    bool notzero(int n)
    {
        while (n > 0)
        {
            if (n % 10 == 0)
                return false;
            n /= 10;
        }
        return true;
    }
};
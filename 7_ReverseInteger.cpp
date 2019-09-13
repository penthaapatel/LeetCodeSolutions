/*
7. Reverse Integer - https://leetcode.com/problems/reverse-integer/

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution
{
public:
    int reverse(int x)
    {
        long long result = 0;
        bool negative = false;
        long long n = x;
        if (n < 0)
        {
            n = n * -1;
            negative = true;
        }

        while (n != 0)
        {
            result = (10 * result) + (n % 10);
            n = n / 10;
        }

        if (result > INT_MAX)
        {
            return 0;
        }

        return (negative) ? (int)(-1 * result) : (int)result;
    }
};
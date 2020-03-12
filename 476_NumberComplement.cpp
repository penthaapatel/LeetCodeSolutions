/*
476: Number Complement
Link: https://leetcode.com/problems/number-complement/
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
*/

class Solution
{
public:
    int findComplement(int num)
    {
        int answer = 0;
        int pow = 1;
        while (num > 0)
        {
            answer += ((num % 2) ^ 1) * pow;
            pow = pow << 1;
            num = num >> 1;
        }
        return answer;
    }
};
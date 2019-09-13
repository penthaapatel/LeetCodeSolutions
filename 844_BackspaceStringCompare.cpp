/*
844. Backspace String Compare - https://leetcode.com/problems/backspace-string-compare/

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
*/

class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        stack<char> s;
        stack<char> t;
        for (char &c : S)
        {
            if (c != '#')
            {
                s.push(c);
            }
            else if (!s.empty())
            {
                s.pop();
            }
        }

        for (char &c : T)
        {
            if (c != '#')
            {
                t.push(c);
            }
            else if (!t.empty())
            {
                t.pop();
            }
        }

        return (s == t);
    }
};
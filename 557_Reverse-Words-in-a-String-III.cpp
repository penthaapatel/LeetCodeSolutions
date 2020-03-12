/*
Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/
*/

class Solution
{
public:
    string reverseWords(string s)
    {
        string answer;
        int i = 0;
        for (int j = 0; j <= s.length(); j++)
        {
            if (s[j] == ' ' || j == s.length())
            {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        return s;
    }
};
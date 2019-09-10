/*
242. Valid Anagram
Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Note:
You may assume the string contains only lowercase alphabets.
 */

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        map<char, int> m;
        for (char &c : s)
        {
            m[c]++;
        }
        for (char &c : t)
        {
            m[c]--;
        }
        for (auto i : m)
        {
            if (i.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
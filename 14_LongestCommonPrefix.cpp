/*
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result = "";
        if (strs.empty())
        {
            return result;
        }
        int index = 0;
        string s1 = strs.front();
        for (auto c = s1.begin(); c != s1.end(); c++)
        {
            for (int i = 1; i < strs.size(); i++)
            {
                if (index >= strs.at(i).length() || *c != strs.at(i)[index])
                {
                    return result;
                }
            }
            result += *c;
            index++;
        }
        return result;
    }
};
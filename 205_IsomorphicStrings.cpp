/*
205: Isomorphic Strings
Link: https://leetcode.com/problems/isomorphic-strings/
*/

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> map_s, map_t;
        for (int i = 0; i < s.length(); i++)
        {
            if (map_s.find(s[i]) == map_s.end() && map_t.find(t[i]) == map_t.end())
            {
                map_s[s[i]] = t[i];
                map_t[t[i]] = s[i];
            }
            else
            {
                if (map_s[s[i]] != t[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
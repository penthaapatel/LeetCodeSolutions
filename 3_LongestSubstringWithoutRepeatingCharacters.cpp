/*
3. Longest Substring Without Repeating Characters - https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        if (s.size() == 0)
            return 0;

        int n = s.size();
        int l = 0;
        int r = 0;
        int ans = 0;
        set<char> st;
        while (r < n && l < n)
        {
            if (st.find(s[r]) == st.end())
            {
                st.insert(s[r++]);
                ans = max(ans, r - l);
            }
            else
            {
                st.erase(s[l++]);
            }
        }

        return ans;
    }
};
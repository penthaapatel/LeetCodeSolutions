// 438. Find All Anagrams in a String - https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {

        vector<int> result;
        vector<int> charCounts(26, 0);

        for (char c : p)
        {
            charCounts[c - 'a']++;
        }

        int l = 0;
        int r = 0;
        int count = p.size();
        while (r < s.size())
        {
            if (charCounts[s[r++] - 'a']-- >= 1)
                count--;
            if (count == 0)
                result.push_back(l);
            if (r - l == p.size() && charCounts[s[l++] - 'a']++ >= 0)
                count++;
        }

        return result;
    }
};
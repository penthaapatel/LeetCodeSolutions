/*
5. Longest Palindromic Substring - https://leetcode.com/problems/longest-palindromic-substring/
*/

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        if (n == 0)
            return "";

        bool dp[n][n];
        memset(dp, false, sizeof(dp));

        //every single char is a palindrome
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = true;
        }

        int start = 0;
        int maxlen = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j < n; j++)
            {
                if (s[i] == s[j] && i != j)
                {
                    if (j == i + 1)
                    {
                        dp[i][j] = true;
                    }
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                    if (dp[i][j] && j - i + 1 > maxlen)
                    {
                        maxlen = j - i + 1;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxlen);
    }
};
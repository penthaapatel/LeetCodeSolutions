/*
278. First Bad Version - https://leetcode.com/problems/first-bad-version/
*/

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 0;
        int r = n;
        int mid;

        while (l < r)
        {
            mid = l + (r - l) / 2;
            (isBadVersion(mid)) ? r = mid : l = mid + 1;
        }

        return l;
    }
};
// 775. Global and Local Inversions - https://leetcode.com/problems/global-and-local-inversions/

class Solution
{
public:
    bool isIdealPermutation(vector<int> &A)
    {
        int n = A.size();
        int m = -1;
        for (int i = 0; i < n - 2; i++)
        {
            m = max(m, A[i]);
            if (m > A[i + 2])
                return false;
        }

        return true;
    }
};
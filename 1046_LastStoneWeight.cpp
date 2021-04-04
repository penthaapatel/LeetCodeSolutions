//1046. Last Stone Weight - https://leetcode.com/problems/last-stone-weight/

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        while (stones.size() > 1)
        {
            sort(stones.begin(), stones.end(), greater<int>());
            int new_element = stones[0] - stones[1];
            if (new_element != 0)
                stones.push_back(new_element);
            stones.erase(stones.begin(), stones.begin() + 2);
        }
        return stones.size() == 0 ? 0 : stones[0];
    }
};
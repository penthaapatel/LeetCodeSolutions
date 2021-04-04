// 846. Hand of Straights - https://leetcode.com/problems/hand-of-straights/

class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int W)
    {
        int n = hand.size();
        if (n % W != 0)
        {
            return false;
        }

        map<int, int> cardcount;
        for (int card : hand)
        {
            cardcount[card]++;
        }

        while (cardcount.size() > 0)
        {
            int current = cardcount.begin()->first;
            for (int i = current; i < current + W; i++)
            {
                if (cardcount.find(i) == cardcount.end())
                    return false;
                if (cardcount[i] == 1)
                    cardcount.erase(i);
                else
                    cardcount[i]--;
            }
        }

        return true;
    }
};
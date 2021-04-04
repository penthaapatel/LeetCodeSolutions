// 621. Task Scheduler - https://leetcode.com/problems/task-scheduler/

class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        vector<int> count(26, 0);
        for (auto task : tasks)
        {
            count[task - 'A']++;
        }

        sort(count.begin(), count.end());

        int maxcount = count[25] - 1;
        int idle = maxcount * n;

        for (int i = 24; i >= 0; i--)
        {
            idle -= min(maxcount, count[i]);
        }

        return idle > 0 ? idle + tasks.size() : tasks.size();
    }
};
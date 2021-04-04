// 1302. Deepest Leaves Sum - https://leetcode.com/problems/deepest-leaves-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int deepestLeavesSum(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.emplace(root);
        int levelsum = 0;

        while (!q.empty())
        {
            levelsum = 0;
            int s = q.size();

            for (int i = 0; i < s; i++)
            {
                TreeNode *current = q.front();
                q.pop();
                levelsum += current->val;
                if (current->left != nullptr)
                    q.emplace(current->left);

                if (current->right != nullptr)
                    q.emplace(current->right);
            }
        }

        return levelsum;
    }
};
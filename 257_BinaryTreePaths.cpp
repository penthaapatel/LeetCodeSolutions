// 257. Binary Tree Paths - https://leetcode.com/problems/binary-tree-paths/

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
    void dfs(TreeNode *root, string currentpath, vector<string> &result)
    {
        currentpath += "->" + to_string(root->val);

        if (root->left == nullptr && root->right == nullptr)
        {
            result.push_back(currentpath);
            return;
        }

        if (root->left != nullptr)
            dfs(root->left, currentpath, result);
        if (root->right != nullptr)
            dfs(root->right, currentpath, result);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        if (root == nullptr)
            return result;

        string currentpath = to_string(root->val);

        if (root->left == nullptr && root->right == nullptr)
            result.push_back(currentpath);
        if (root->left != nullptr)
            dfs(root->left, currentpath, result);
        if (root->right != nullptr)
            dfs(root->right, currentpath, result);

        return result;
    }
};
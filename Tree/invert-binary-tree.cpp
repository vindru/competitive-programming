/**
 * Author: Vindru
 * Problem:  https://leetcode.com/problems/invert-binary-tree
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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return root;
        }
        TreeNode *res = new TreeNode;
        res->val = root->val;
        res->right = invertTree(root->left);
        res->left = invertTree(root->right);
        return res;
    }
};

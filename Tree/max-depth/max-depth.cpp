/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * 
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 * 
 * Solution: Complexity Time O(n) Space O(n)
 */
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        if (leftDepth > rightDepth)
        {
            return leftDepth + 1;
        }
        else
        {
            return rightDepth + 1;
        }
    }
};

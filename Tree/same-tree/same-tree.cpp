/**
 * Author: Vindru
 * Problem: https://leetcode.com/problems/same-tree
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
        {
            return true;
        }
        if (!p || !q)
        {
            return false;
        }
        if (p->val != q->val)
        {
            return false;
        }
        bool isLeftSame = isSameTree(p->left, q->left);
        if (!isLeftSame)
        {
            return false;
        }
        bool isRightSame = isSameTree(p->right, q->right);
        if (!isRightSame)
        {
            return false;
        }
        return true;
    }
};

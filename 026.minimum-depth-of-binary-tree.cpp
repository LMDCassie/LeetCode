/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;//如果是空树，就是0节点
        if(!root->left)return 1+minDepth(root->right);//一个节点无左子树，就转向右子树，要加上这个节点
        if(!root->right)return 1+minDepth(root->left);
        return 1+min(minDepth(root->right),minDepth(root->left));//加上根节点
    }
};


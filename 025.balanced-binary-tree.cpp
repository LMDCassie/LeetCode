/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        if(abs(getdepth(root->left)-getdepth(root->right))>1)return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
    int getdepth(TreeNode* root){
        if(!root)return 0;
        return 1+max(getdepth(root->left),getdepth(root->right));
    }
    
};


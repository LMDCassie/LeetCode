/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>> res;
        queue<TreeNode*>q{{root}};
        while(!q.empty()){
            vector<int>oneLevel;
            for(int i=q.size();i>0;i--){
                TreeNode *t=q.front();
                q.pop();
                oneLevel.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            res.insert(res.begin(),oneLevel);
        }
        return res;
    }
};


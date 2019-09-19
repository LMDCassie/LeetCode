/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return binary(nums,0,(int)nums.size()-1);
    }
    TreeNode* binary(vector<int>& nums,int left,int right){
        if(left>right)return NULL;
        int mid=left+(right-left)/2;
        TreeNode* cur=new TreeNode(nums[mid]);
        cur->left=binary(nums,left,mid-1);
        cur->right=binary(nums,mid+1,right);
        return cur; 
    }
}；
/*
其实是二分法的考察
因为BST按中序遍历为有序数组
那么root就是有序数组的中位数
按二分法排布
*/

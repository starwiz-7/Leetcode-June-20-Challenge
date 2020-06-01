/*
  Author: Aryan Yadav(starwiz-7)
  Invert Binary Tree

  Algorithm: Tree Traversal
  Difficulty: Easy
*/


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
class Solution {
public:
    void invert(TreeNode* node){
        if(node == NULL)
            return;
        invert(node->left);
        invert(node->right);
        TreeNode* temp;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};

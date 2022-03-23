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
    int sum = 0;
    void helper(TreeNode* root) {
         if(root==NULL) {
            return;
        }
        helper(root->left);
        if(root->left && (!root->left->left && !root->left->right)) {
            sum = sum + root->left->val;
        } 
        helper(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root);
        return sum;   
    }
};

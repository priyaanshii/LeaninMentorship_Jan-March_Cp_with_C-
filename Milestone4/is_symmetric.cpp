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
    bool check(TreeNode *one, TreeNode *two) {
        if ((!one && two) or (one && !two))
            return false;
        if (!one && !two)
            return true;
        
        if (one->val != two->val)
            return false;
        return check(one->left, two->right) && check(one->right, two->left);
    }
    
    bool isSymmetric(TreeNode *root) {
        return check(root->left, root->right);
    } 
};

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
    // Preorder / DFS
    void dfs(TreeNode* root) {
        
        if (root) {
            TreeNode* record = root->right;
            root->right = root->left;
            root->left = NULL;
        
            TreeNode* dummy = root;
            while (dummy->right) {
                dummy = dummy->right;
            }
        
            dummy->right = record;
        
            dfs(root->right);
        }
        
    }
    void flatten(TreeNode* root) {
        dfs(root);
    }
};
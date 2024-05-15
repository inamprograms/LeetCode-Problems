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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // call on cur, and val
//         if val < cu->val ---- before call we will check weather left is null if null attatch and return if not then call if not call left tree
//         if val > cur->val ---- call right tree
        TreeNode *cur = root;
        
        if (!cur) {
            TreeNode* node = new TreeNode(val);
            return node;
            
        }
       
        helper(cur, val);
        return root;
    }
    
    void helper(TreeNode* cur, int val) {
        
    
        
        if (val < cur->val) {
            if (cur->left) {
                helper(cur->left, val);
                
            } else {
                TreeNode* node = new TreeNode(val);
                cur->left = node;
                return;
            }
           
        } 
        
        if (val > cur->val) {
            
            if (cur->right) {
                helper(cur->right, val);
            } else {
                TreeNode* node = new TreeNode(val);
                cur->right = node;
                return;
            }
           
        } 
        
        
    }
};
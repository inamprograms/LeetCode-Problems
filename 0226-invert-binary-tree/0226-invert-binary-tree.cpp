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
    TreeNode* invertTree(TreeNode* root) {
        
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        
        while (cur || !stk.empty()) {
            
            if (cur) {
            // Inverting subtree  
                TreeNode* temp = cur->left;
                cur->left = cur->right;
                cur->right = temp;
                
                stk.push(cur->right);
             
                cur = cur->left;
                
            } else {
                
                cur = stk.top();
                stk.pop();
            }
        }
        
        return root;
    }
};
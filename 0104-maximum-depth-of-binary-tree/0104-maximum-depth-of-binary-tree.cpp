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
    int maxDepth(TreeNode* root) {
        // Iterative preorder Depth first search
        
        stack<pair<TreeNode*, int>> stk;
        
        TreeNode* node;
        int res = 0;
        int depth;
        
        stk.push({root, 1});
       
        
        while (!stk.empty()) {
            
            pair<TreeNode*, int> temp = stk.top();
            stk.pop();
            
            node = temp.first;
            depth = temp.second;
            
            if (node) {
                res = max(res, depth);
                stk.push({node->left, depth + 1});
                stk.push({node->right, depth + 1});
            }
        }
        
        return res;
    }
};
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, 0, targetSum);
    }
    
    
    bool dfs(TreeNode* cur, int pathSum, int targetSum) {
        
        if (!cur) {
            return false;
        }
        
        pathSum += cur->val;
        
        if (!cur->left && !cur->right) {
            if (pathSum == targetSum) {
                return true;
            }
        }
        return dfs(cur->left, pathSum, targetSum) || dfs(cur->right, pathSum, targetSum);
    }
};
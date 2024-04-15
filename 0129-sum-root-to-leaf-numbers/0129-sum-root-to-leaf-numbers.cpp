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
    int sumNumbers(TreeNode* root) {
        int res = dfs(root, 0);
        return res;
    }
    
    int dfs(TreeNode* cur, int n) {
        
        if (!cur) {
            return 0;
        }
        
        n = 10 * n + cur->val;
        cout << n<<" ";
        
        if(!cur->left && !cur->right) return n;
        
        return dfs(cur->left, n) + dfs(cur->right, n);
        
        
    }
};  

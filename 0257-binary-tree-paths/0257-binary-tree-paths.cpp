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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return res;
    }
    
    void dfs(TreeNode* cur, string path) {
        
        if (!cur) {
            return;
        }
        
        if (path == "") {
            path += to_string(cur->val);
        } else {
            path += "->" + to_string(cur->val);
        }
        
        
        if (!cur->left && !cur->right) {
            res.push_back(path);
            path = "";
        }
        dfs(cur->left, path);
        dfs(cur->right, path);
    }
};
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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        vector<int> ans;
        stack<TreeNode*> stk;
        
        stk.push(root);
        
        while(!stk.empty()){
            TreeNode* curr = stk.top();
            if(curr->left){
                stk.push(curr->left);
                curr->left = NULL;
            }
            else{
                if(curr->right){
                    stk.push(curr->right);
                    curr->right = NULL;
                }
                else{
                    ans.push_back(curr->val);
                    stk.pop();
                }
            }
        }
        return ans;
    }
};
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
vector<int> ans;
    void lastNode (TreeNode* root){
        if(root == nullptr)
            return;
        ans.push_back(root->val);
        lastNode(root->left);
        lastNode(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        ans.clear();
        lastNode(root);
        return ans;
        
    }
};
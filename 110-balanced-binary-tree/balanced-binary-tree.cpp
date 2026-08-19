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
    int depth(TreeNode* root){
        if(root == nullptr)
            return 0;
        int lheight = depth(root->left);
        int rheight = depth(root->right);
        if(lheight == -1 || rheight == -1 || abs(lheight-rheight)>1)
            return -1;
        return max(lheight, rheight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return (depth(root) >= 0);
        
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr)
            return {};
        TreeNode* temp = root;
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(temp);
        int level = 0;
        while(!q.empty()){
            int len = q.size();
            res.push_back({});
            for(int i=0; i<len; i++){
                temp = q.front();
                q.pop();
                res[level].push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            level++;
        }
        return res;
        
    }
};
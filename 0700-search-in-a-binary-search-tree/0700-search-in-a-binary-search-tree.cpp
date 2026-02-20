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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;
        
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
                TreeNode* cur = q.front();
                if(cur->val == val) return cur;
                q.pop();

                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
        }
        return nullptr;
    }
};
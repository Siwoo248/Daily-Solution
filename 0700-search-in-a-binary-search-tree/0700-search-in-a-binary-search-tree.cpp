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
class Solution {             // BST-Binary Search Tree is in order
public:
    TreeNode* searchBST(TreeNode* root, int val){   // Using binary search method
        TreeNode* cur = root;
        while(cur != nullptr){
            if(cur->val == val) return cur;         // Comparing with current node
            else if(cur->val > val){                // if current is smaller -> go right
                cur = cur->left;                    // if current is larger -> go left
            }
            else{
                cur = cur->right;
            }
        }
        return nullptr;
    }
};



// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {  // Using BFS method
//         if(root == nullptr) return nullptr;
        
//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//                 TreeNode* cur = q.front();
//                 if(cur->val == val) return cur;
//                 q.pop();

//                 if(cur->left) q.push(cur->left);
//                 if(cur->right) q.push(cur->right);
//         }
//         return nullptr;
//     }
// };
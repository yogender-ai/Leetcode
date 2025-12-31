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
    vector<int>q;
    vector<int> postorderTraversal(TreeNode* root) {

        postorder(root);
        return q;
    }
    void postorder(TreeNode* root){
        if(!root) return;
        postorder(root->left);
        postorder(root->right);
        q.push_back(root->val);

    }
};
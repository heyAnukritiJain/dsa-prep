class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *p;
        if ( root != NULL ) {
            invertTree(root->left);
            invertTree(root->right);
            p = root->left;
            root->left = root->right;
            root->right = p;
        }
        return root;
    }
};
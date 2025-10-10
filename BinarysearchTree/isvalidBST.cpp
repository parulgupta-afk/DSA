class Solution {
public:
    bool isValid(TreeNode* root, long long minval, long long maxval) {
        if (!root)
            return true;

        if (root->val >= maxval || root->val <= minval)
            return false;
        return isValid(root->left, minval, root->val) &&
               isValid(root->right, root->val, maxval);
    }
    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};

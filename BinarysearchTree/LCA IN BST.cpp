class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;

        int cur = root->val;

        if(cur<p->val && cur<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        if(cur>p->val && cur>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        return root;
    }
};

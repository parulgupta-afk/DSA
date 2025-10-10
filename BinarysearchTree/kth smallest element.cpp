class Solution {
public:
    struct Compare {
        bool operator()(TreeNode* a, TreeNode* b) {
            return a->val > b->val;
        }
    };

    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return 0;
        priority_queue<TreeNode*, vector<TreeNode*>, Compare> pq;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            pq.push(node);

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }

        while(k>1){
            TreeNode* node = pq.top();
            pq.pop();
            k--;
        }
        return pq.top()->val;
    }
};

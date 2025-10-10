/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        // code here
        queue<Node*> pq;
        pq.push(root);
        
        int maxi = INT_MIN;
        while(!pq.empty()){
            Node* node = pq.front();
            pq.pop();
            
            maxi = max(maxi,node->data);
            if(node->left) pq.push(node->left);
            if(node->right) pq.push(node->right);
        }
        return maxi;
    }

    int findMin(Node *root) {
        queue<Node*> pq;
        pq.push(root);
        
        int mini = INT_MAX;
        while(!pq.empty()){
            Node* node = pq.front();
            pq.pop();
            
            mini = min(mini,node->data);
            if(node->left) pq.push(node->left);
            if(node->right) pq.push(node->right);
        }
        return mini;
        
    }
};

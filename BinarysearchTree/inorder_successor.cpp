struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x){
        Node* success = NULL;
        while(root!=NULL){
            if(x->data>=root->data){
                root = root->right;
            }
            else {
                success = root;
                root = root->left;
            }
        }
        return success? success->data: -1;
    }
};

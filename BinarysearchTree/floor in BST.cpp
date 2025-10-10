class Solution {

  public:
    int floor(Node* root, int x) {
        int xfloor =-1;
        while(root){
            if(root->data==x){
                xfloor = root->data;
                return xfloor;
            }
            else if(root->data<x){
                xfloor = root->data;
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
        return xfloor;
    }
};

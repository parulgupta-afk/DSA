class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int Xceil =-1;
        while(root){
            if(root->data==x){
                Xceil = root->data;
                return Xceil;
            }
            else if(root->data<x){
                root = root->right;
            }
            else{
                Xceil = root->data;
                root = root->left;
            }
        }
        return Xceil;
    }
};

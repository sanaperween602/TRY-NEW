/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        if(root==NULL)
        return NULL;
        if(root->data==n1||root->data==n2)
        return root;
        Node* ls=lca(root->left,n1,n2);
        Node* rs=lca(root->right,n1,n2);
        if(ls!=NULL&&rs!=NULL)
        return root;
        
        if(ls!=NULL)
        {
        return ls;
        }
        else
        return rs;
    }
};
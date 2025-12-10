/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
 
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
   int fun (Node* root)
        {
            if(root==NULL)
            return 0;
        
        if(root->left==NULL&&root->right==NULL)
        {
            int rootprevvalue=root->data;
            root->data=0;
            return rootprevvalue;
            
        }
        int ls=fun(root->left);
        int rs=fun(root->right);
        int rootprevvalue =root->data;
        
         root->data=ls+rs;
        
        return rootprevvalue+ls+rs;
        }
    void toSumTree(Node *node) {
        // Your code here
         fun(node);
        
    }
};
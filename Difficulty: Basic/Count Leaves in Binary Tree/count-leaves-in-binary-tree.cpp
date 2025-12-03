/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* node) {
        // write code here
        if(node==NULL)
        return 0;
        if(node->left==NULL&&node->right==NULL)
        return 1;
        int ls =countLeaves(node->left);
        int rs =countLeaves(node->right);
        return ls+rs;
    }
};
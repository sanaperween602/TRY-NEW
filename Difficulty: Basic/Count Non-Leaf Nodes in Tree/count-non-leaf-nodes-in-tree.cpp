/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* node) {
        // Code here
        if(node==NULL || (node->left==NULL &&node->right==NULL))
        return 0;
      int  ls=countNonLeafNodes(node->left);
       int rs=countNonLeafNodes(node->right);
       return 1+ls+rs;
    }
};
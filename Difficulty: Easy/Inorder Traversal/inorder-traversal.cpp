/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/
 void inorderTrav(Node*root ,vector<int>&ans)
{
        if(root==NULL)
        return ;
        
        inorderTrav(root->left,ans);
        ans.push_back(root->data);
        inorderTrav(root->right,ans);
}
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
       vector<int>ans;
       inorderTrav(root,ans);
       return ans;
    }
};
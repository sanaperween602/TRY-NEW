/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void post(Node*root,vector<int>&ans)
{
    if(root==NULL)
    return;
    //LRN------>
    //left side
    post(root->left,ans);
    //right side
    post(root->right,ans);
    //node print
    ans.push_back(root->data);
    
    
    
}
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int>ans;
        post(root,ans);
        return ans;
    }
};
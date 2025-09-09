// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
      //code here
      //(NLR)
      //node
      //left
      //right
      vector<int>ans;
      while(root)
      {
          //if root doest exist
          if(!root->left)
          {
              ans.push_back(root->data);
              root=root->right;
          }
          //agr left exist krta h to
          else
          {
              Node*curr=root->left;
              while(curr->right&&curr->right!=root)
              curr=curr->right;
              if(curr->right==NULL)
              {
                  ans.push_back(root->data);
                  curr->right=root;
                  root=root->left;
              }
              else
              {
                  curr->right=NULL;
                  root=root->right;
              }
          }
      }
      return ans;
      
    }
};
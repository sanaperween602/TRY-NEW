// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        //NODE RIGHT LEFT(NRL)THEN REVERSE--->LNR 
      vector<int>ans;
      while(root)
      {
          //if right part does't exist
          if(!root->right)
          {
              ans.push_back(root->data);
              root=root->left;
          }
          //else right part exist
          else
          {
              Node*curr=root->right;
              while(curr->left&&curr->left!=root)
              curr=curr->left;
              //we have 2 case 
             //1st traverse nhi hua
              if(curr->left==NULL)
              {
                  ans.push_back(root->data);
                  curr->left=root;
                  root=root->right;
              }
              
               //2nd traverse ho chuka
               else
               {
                   curr->left=root;
                   root=root->left;
               }
              
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
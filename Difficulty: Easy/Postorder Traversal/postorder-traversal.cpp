/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void postOrder(Node*node ,vector<int>&ans)
  {
      if(node==nullptr)
      return;
      postOrder(node->left,ans);
      postOrder(node->right,ans);
      ans.push_back(node->data);
      
  }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        postOrder(root,ans);
        return ans;
    }
};
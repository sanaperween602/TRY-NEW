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
      void inOrder(Node *node, vector<int>&ans)
    {
        if(node==nullptr)
        {
            return;
        }
        //LNR
        inOrder(node->left,ans);
        ans.push_back(node->data);
        inOrder(node->right,ans);
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
void inordertrav(Node *root , vector<int>&ans)
{
    if(!root)
    return;
    
    inordertrav(root->left,ans);
    ans.push_back(root->data);
    inordertrav(root->right,ans);
}
class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        vector<int>ans;
        inordertrav(root,ans);
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]<=ans[i-1])
            {
            return false;
            }
        }
        
            return true;
    }
};
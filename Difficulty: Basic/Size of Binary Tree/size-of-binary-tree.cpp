/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void Total(Node *root ,int &count)
{
    if(root==NULL)
    return;
    count++;
    Total(root->left,count);
    Total(root->right,count);
}

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        int count=0;
        Total(root,count);
        return count;
    }
};